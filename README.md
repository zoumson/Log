[![LinkedIn][linkedin-shield]][linkedin-url]
<!--
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]


[![Github][github-shield]][github.com/zoumson?tab=repositories]
[![Stack Overflow][stackoverflow-shield]][stackoverflow.com/users/11175375/adam]
[![Leetcode][leetcode-shield]][eetcode.com/Hard_Code/]
-->
## Log

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#file-structure">Files Structure</a>
      <ul>
        <li><a href="#folders">Folders</a></li>
        <li><a href="#entire-files-structure">Entire Files Structure</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

In a clear way, logging is just a fancy word to define a process of writing down everything you do.

There are several kinds of logging. You may log every operation of an application, log only when errors occur, or log crytical operations done by a user, especially if you want to have control of who’s doing what for audit purposes.

Applications can log at a code level for debugging or at a user level for audits and phorbidden access register.

Every operating system have routines or services running on the background with the task of taking notes of everything that is happening. This way a SysAdmin can detect security breaches, malfunctions etc.
<!--Built with -->
### Built With

<br>

* [boost](https://boost.org/)
* [cmake](https://cmake.org/)
* [gnu](https://www.gnu.org/)

<br>

## File Structure

### Folders

* [include/](include/): c++ header files.
* [src/](src/): c++ definitions.


### Entire Files Structure 


```
.
├── CMakeLists.txt
├── include
│   └── Log.h
├── README.md
└── src
    └── Demo.cpp

```


<!-- GETTING STARTED -->
## Getting Started

This is a sample code of how you may generate logs in your program.
To get a local copy up and running follow these simple steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* cmake
  ```sh
  sudo apt-get install cmake
  ```

* [boost](https://stackoverflow.com/questions/8430332/uninstall-boost-and-install-another-version)
  ```sh
  cd /opt
  mkdir boost
  sudo apt-get -y install build-essential g++ python-dev autotools-dev libicu-dev libbz2-dev
  wget http://downloads.sourceforge.net/project/boost/boost/1.76.0/boost_1_76_0.tar.gz
  tar -zxvf boost_1_76_0.tar.gz
  cd boost_1_76_0
  # get the no of cpucores to make faster
  cpuCores=`cat /proc/cpuinfo | grep "cpu cores" | uniq | awk '{print $NF}'`
  echo "Available CPU cores: "$cpuCores
  ./bootstrap.sh  # this will generate ./b2
  sudo ./b2 --with=all -j $cpuCores install
  ```
 * Check boost version
  ```sh
  cat /usr/local/include/boost/version.hpp | grep "BOOST_LIB_VERSION"
  ```
 * Result
  ```sh
  // BOOST_LIB_VERSION must be defined to be the same as BOOST_VERSION
  #define BOOST_LIB_VERSION "1_76_0"
  ```
  * Alternatively, install `boost`from `linux` package 
  ```sh
    sudo apt-get install libboost-all-dev
  ```

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/zoumson/Log.git
   ```
2. Go to the project directory source
   ```sh
   cd Log
   ```
3. Create empty directories `build`,  and `bin`
   ```sh
   mkdir build &&  mkdir bin 
   ```
5. Generate the exectutable `demo` and move it to `bin`
   ```sh
   cd build && cmake .. && make && cd ..
   ```

<!-- USAGE EXAMPLES -->
### Usage
1. run 
   ```sh
   ./bin/demo
   ```
2. Output

```
Demo Log manager using boost
[2021-06-10 15:00:05]<6>: log1--->[1]...
[2021-06-10 15:00:05]<3>: log1--->[2]...
[2021-06-10 15:00:05]<4>: log2--->[2]...
```
3. Two log files are generated `log1.txt` and `log2.txt`

4. Back to the initial file structure configuration
   ```sh
   rm -r bin build *log*
   ```
<!-- ROADMAP -->
## Roadmap

All the headers files are well docummented, read through the comments

<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Adama Zouma - <!-- [@your_twitter](https://twitter.com/your_username) -->- stargue49@gmail.com

Project Link: [https://github.com/zoumson/Log](https://github.com/zoumson/Log.git)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [Google](https://www.google.com/)
* [Stack Overflow](https://stackoverflow.com/)
* [Github](https://github.com/)




<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: linkedin.com/in/adama-zouma-553bba13a
[product-screenshot]: images/screenshot.png

