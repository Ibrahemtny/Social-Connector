# Social-Connector

Coworker Availability Matcher

A simple app I made to help match coworkers based on when they’re available. Think of it as a tool to help schedule meetings when everyone has some free time. It lets you input coworker availability, finds matching times, and even generates a visual graph of the "network" of coworkers based on availability.

Features:

Match coworkers based on shared availability.

Graph visualization: See who is connected in terms of availability (using Graphviz).

Qt-based GUI: A simple interface to input coworker details and display results.


Prerequisites:

Before running the project, you'll need a couple of things:

C++ Compiler: GCC, Clang, or any C++ compiler that supports C++11 or later.

Qt: For the GUI part. You can download it here.

Graphviz: For generating the availability graph. Install it from Graphviz's site.

How to Set Up:
Clone this repo to your local machine:

bash
Copy
git clone https://github.com/Ibrahemtny/Social-Connector.git


Set up Qt:

Open the .pro file in Qt Creator.
Make sure the Qt kit is correctly set up.
Set up Graphviz (for visualization):

Download and install Graphviz (you can check its website for installation instructions).
Ensure the dot command (from Graphviz) is available in your PATH for generating graphs.
Build and Run:

In Qt Creator, hit Build and then Run.
You should see a basic window where you can input coworker availability details.
After entering the details, click "Find Matches" to see who else has matching availability.
If you want, it will also generate a visual graph showing how coworkers are connected based on availability.
