# CS50P: Introduction to Programming with Python

My solutions to the problem sets of [Harvard's CS50P](https://cs50.harvard.edu/python/), taught by David J. Malan.

I am a first-year Applied Mathematics student at Istanbul Technical University (ITU). I use this repository to track my progress and to practice writing clean, tested Python.

## Progress

- [x] Week 0: Functions, Variables
- [x] Week 1: Conditionals
- [x] Week 2: Loops
- [x] Week 3: Exceptions
- [x] Week 4: Libraries
- [ ] Week 5: Unit Tests
- [x] Week 6: File I/O
- [ ] Week 7: Regular Expressions
- [ ] Week 8: Object-Oriented Programming
- [ ] Week 9: Et Cetera
- [ ] Final Project

## Repository structure

Each problem set has its own folder, and each problem has its own subfolder with the solution file:

```
cs50p/
├── week0_functions/
│   ├── indoor/
│   │   └── indoor.py
│   └── ...
├── week1_conditionals/
├── week2_loops/
├── week3_exceptions/
├── week4_libraries/
│   ├── emojize/
│   ├── figlet/
│   ├── adieu/
│   ├── game/
│   ├── professor/
│   └── bitcoin/
└── README.md
```

## Running a solution

Requirements: Python 3.10 or newer.

```bash
# Clone the repository
git clone https://github.com/<your-username>/cs50p.git
cd cs50p

# Create and activate a virtual environment
python3 -m venv venv
source venv/bin/activate

# Install the libraries used in the problem sets
pip install -r requirements.txt

# Run a solution
python week4_libraries/professor/professor.py
```

Some problems need an API key (for example, `bitcoin`). Put it in a `.env` file in the project root. This file is listed in `.gitignore` and is never committed.

## Libraries used

- [`requests`](https://pypi.org/project/requests/): HTTP requests to APIs
- [`inflect`](https://pypi.org/project/inflect/): English plurals and number words
- [`pyfiglet`](https://pypi.org/project/pyfiglet/): ASCII art text
- [`cowsay`](https://pypi.org/project/cowsay/): ASCII art characters
- [`python-dotenv`](https://pypi.org/project/python-dotenv/): loading environment variables from `.env`

## Academic honesty

This repository is for my own learning. If you are taking CS50P, please follow the [course's academic honesty policy](https://cs50.harvard.edu/python/2022/honesty/) and write your own solutions. Use this code only to compare ideas after you have solved a problem yourself.

## Contact

- GitHub: [@your-username](https://github.com/your-username)
- LinkedIn: [your-name](https://www.linkedin.com/in/your-profile)

## Acknowledgements

Thanks to David J. Malan and the CS50 team for making this course free and open to everyone.
