#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iterator>

void setPatterns(std::vector<std::vector<cv::Point2f>>&pattern_table)
{
    //lewo
    std::vector<cv::Point2f> vec0 = {cv::Point2f(9, 101), cv::Point2f(10, 101), cv::Point2f(11, 101), cv::Point2f(12, 101), cv::Point2f(13, 101), cv::Point2f(14, 101), cv::Point2f(15, 101), cv::Point2f(15, 102), cv::Point2f(16, 102), cv::Point2f(17, 102), cv::Point2f(18, 102), cv::Point2f(19, 102), cv::Point2f(20, 102), cv::Point2f(21, 102), cv::Point2f(22, 102), cv::Point2f(23, 102), cv::Point2f(23, 103), cv::Point2f(24, 103), cv::Point2f(25, 103), cv::Point2f(26, 103), cv::Point2f(27, 103), cv::Point2f(28, 103), cv::Point2f(29, 103), cv::Point2f(30, 103), cv::Point2f(31, 103), cv::Point2f(32, 103), cv::Point2f(33, 103), cv::Point2f(34, 103), cv::Point2f(35, 103), cv::Point2f(36, 103), cv::Point2f(37, 103), cv::Point2f(38, 103), cv::Point2f(39, 103), cv::Point2f(40, 103), cv::Point2f(41, 103), cv::Point2f(42, 103), cv::Point2f(43, 103), cv::Point2f(44, 103), cv::Point2f(45, 103), cv::Point2f(46, 103), cv::Point2f(47, 103), cv::Point2f(48, 103), cv::Point2f(49, 103), cv::Point2f(50, 103), cv::Point2f(51, 103), cv::Point2f(52, 103), cv::Point2f(53, 103), cv::Point2f(54, 103), cv::Point2f(54, 102), cv::Point2f(55, 102), cv::Point2f(56, 102), cv::Point2f(57, 102), cv::Point2f(58, 102), cv::Point2f(59, 102), cv::Point2f(60, 102), cv::Point2f(61, 102), cv::Point2f(62, 102), cv::Point2f(63, 102), cv::Point2f(64, 102), cv::Point2f(65, 102), cv::Point2f(66, 102), cv::Point2f(67, 102), cv::Point2f(68, 102), cv::Point2f(69, 102), cv::Point2f(70, 102), cv::Point2f(71, 102), cv::Point2f(72, 102), cv::Point2f(73, 102), cv::Point2f(74, 102), cv::Point2f(75, 102), cv::Point2f(76, 102), cv::Point2f(77, 102), cv::Point2f(78, 102), cv::Point2f(79, 102), cv::Point2f(80, 102), cv::Point2f(81, 102), cv::Point2f(82, 102), cv::Point2f(83, 102), cv::Point2f(84, 102), cv::Point2f(85, 102), cv::Point2f(86, 102), cv::Point2f(87, 102), cv::Point2f(88, 102), cv::Point2f(89, 102), cv::Point2f(90, 102), cv::Point2f(91, 102), cv::Point2f(92, 102), cv::Point2f(93, 102), cv::Point2f(94, 102), cv::Point2f(95, 102), cv::Point2f(96, 102), cv::Point2f(97, 102), cv::Point2f(98, 102), cv::Point2f(99, 102), cv::Point2f(100, 102), cv::Point2f(101, 102), cv::Point2f(102, 102), cv::Point2f(103, 102), cv::Point2f(104, 102), cv::Point2f(105, 102), cv::Point2f(106, 102), cv::Point2f(107, 102), cv::Point2f(108, 102), cv::Point2f(109, 102), cv::Point2f(110, 102), cv::Point2f(111, 102), cv::Point2f(112, 102), cv::Point2f(113, 102), cv::Point2f(114, 102), cv::Point2f(115, 102), cv::Point2f(116, 102), cv::Point2f(117, 102), cv::Point2f(118, 102), cv::Point2f(119, 102), cv::Point2f(120, 102), cv::Point2f(121, 102), cv::Point2f(122, 102), cv::Point2f(123, 102), cv::Point2f(124, 102), cv::Point2f(125, 102), cv::Point2f(126, 102), cv::Point2f(127, 102), cv::Point2f(128, 102), cv::Point2f(129, 102), cv::Point2f(130, 102), cv::Point2f(131, 102), cv::Point2f(132, 102), cv::Point2f(133, 102), cv::Point2f(134, 102), cv::Point2f(135, 102), cv::Point2f(136, 102), cv::Point2f(137, 102), cv::Point2f(138, 102), cv::Point2f(139, 102), cv::Point2f(140, 102), cv::Point2f(141, 102), cv::Point2f(142, 102), cv::Point2f(143, 102), cv::Point2f(144, 102), cv::Point2f(145, 102), cv::Point2f(146, 102), cv::Point2f(147, 102), cv::Point2f(148, 102), cv::Point2f(149, 102), cv::Point2f(150, 102), cv::Point2f(151, 102), cv::Point2f(152, 102), cv::Point2f(153, 102), cv::Point2f(154, 102), cv::Point2f(155, 102), cv::Point2f(156, 102), cv::Point2f(157, 102), cv::Point2f(158, 102), cv::Point2f(159, 102), cv::Point2f(160, 102), cv::Point2f(161, 102), cv::Point2f(162, 102), cv::Point2f(163, 102), cv::Point2f(164, 102), cv::Point2f(165, 102), cv::Point2f(166, 102), cv::Point2f(167, 102), cv::Point2f(168, 102), cv::Point2f(169, 102), cv::Point2f(170, 102), cv::Point2f(171, 102), cv::Point2f(172, 102), cv::Point2f(173, 102), cv::Point2f(174, 102), cv::Point2f(175, 102), cv::Point2f(176, 102), cv::Point2f(177, 102), cv::Point2f(178, 102), cv::Point2f(179, 102), cv::Point2f(180, 102), cv::Point2f(181, 102), cv::Point2f(182, 102), cv::Point2f(183, 102), cv::Point2f(184, 102), cv::Point2f(185, 102), cv::Point2f(186, 102), cv::Point2f(187, 102), cv::Point2f(188, 102), cv::Point2f(189, 102), cv::Point2f(190, 102)};
    //prawo
    std::vector<cv::Point2f> vec1 = {cv::Point2f(191, 103), cv::Point2f(190, 103), cv::Point2f(189, 103), cv::Point2f(188, 103), cv::Point2f(187, 103), cv::Point2f(186, 103), cv::Point2f(185, 103), cv::Point2f(184, 103), cv::Point2f(183, 103), cv::Point2f(182, 103), cv::Point2f(181, 103), cv::Point2f(180, 103), cv::Point2f(179, 103), cv::Point2f(178, 103), cv::Point2f(177, 103), cv::Point2f(176, 103), cv::Point2f(175, 103), cv::Point2f(174, 103), cv::Point2f(173, 103), cv::Point2f(172, 103), cv::Point2f(171, 103), cv::Point2f(170, 103), cv::Point2f(169, 103), cv::Point2f(168, 103), cv::Point2f(167, 103), cv::Point2f(166, 103), cv::Point2f(165, 103), cv::Point2f(164, 103), cv::Point2f(163, 103), cv::Point2f(162, 103), cv::Point2f(161, 103), cv::Point2f(160, 103), cv::Point2f(159, 103), cv::Point2f(158, 103), cv::Point2f(157, 103), cv::Point2f(156, 103), cv::Point2f(155, 103), cv::Point2f(155, 102), cv::Point2f(154, 102), cv::Point2f(153, 102), cv::Point2f(152, 102), cv::Point2f(151, 102), cv::Point2f(150, 102), cv::Point2f(149, 102), cv::Point2f(148, 102), cv::Point2f(147, 102), cv::Point2f(146, 102), cv::Point2f(145, 102), cv::Point2f(144, 102), cv::Point2f(143, 102), cv::Point2f(142, 102), cv::Point2f(141, 102), cv::Point2f(140, 102), cv::Point2f(139, 102), cv::Point2f(138, 102), cv::Point2f(137, 102), cv::Point2f(136, 102), cv::Point2f(135, 103), cv::Point2f(134, 103), cv::Point2f(133, 103), cv::Point2f(132, 103), cv::Point2f(131, 103), cv::Point2f(130, 103), cv::Point2f(129, 103), cv::Point2f(128, 103), cv::Point2f(127, 103), cv::Point2f(126, 104), cv::Point2f(125, 104), cv::Point2f(124, 104), cv::Point2f(123, 104), cv::Point2f(122, 104), cv::Point2f(121, 104), cv::Point2f(120, 104), cv::Point2f(119, 104), cv::Point2f(118, 104), cv::Point2f(118, 105), cv::Point2f(117, 105), cv::Point2f(116, 105), cv::Point2f(115, 105), cv::Point2f(114, 105), cv::Point2f(113, 105), cv::Point2f(112, 105), cv::Point2f(111, 105), cv::Point2f(110, 105), cv::Point2f(109, 105), cv::Point2f(108, 105), cv::Point2f(107, 105), cv::Point2f(106, 105), cv::Point2f(105, 105), cv::Point2f(104, 105), cv::Point2f(103, 105), cv::Point2f(102, 105), cv::Point2f(101, 105), cv::Point2f(100, 105), cv::Point2f(99, 105), cv::Point2f(98, 105), cv::Point2f(97, 105), cv::Point2f(96, 105), cv::Point2f(95, 105), cv::Point2f(94, 105), cv::Point2f(93, 105), cv::Point2f(92, 105), cv::Point2f(91, 105), cv::Point2f(90, 105), cv::Point2f(89, 105), cv::Point2f(88, 105), cv::Point2f(87, 105), cv::Point2f(86, 105), cv::Point2f(85, 105), cv::Point2f(84, 105), cv::Point2f(83, 105), cv::Point2f(82, 105), cv::Point2f(81, 105), cv::Point2f(80, 105), cv::Point2f(79, 105), cv::Point2f(78, 105), cv::Point2f(77, 105), cv::Point2f(77, 106), cv::Point2f(76, 106), cv::Point2f(75, 106), cv::Point2f(74, 106), cv::Point2f(73, 106), cv::Point2f(72, 106), cv::Point2f(71, 106), cv::Point2f(70, 106), cv::Point2f(69, 106), cv::Point2f(68, 106), cv::Point2f(67, 106), cv::Point2f(66, 106), cv::Point2f(65, 106), cv::Point2f(64, 106), cv::Point2f(63, 106), cv::Point2f(62, 106), cv::Point2f(61, 106), cv::Point2f(60, 106), cv::Point2f(59, 106), cv::Point2f(58, 106), cv::Point2f(57, 106), cv::Point2f(56, 106), cv::Point2f(55, 106), cv::Point2f(54, 106), cv::Point2f(53, 106), cv::Point2f(52, 106), cv::Point2f(51, 106), cv::Point2f(50, 106), cv::Point2f(49, 106), cv::Point2f(48, 106), cv::Point2f(47, 106), cv::Point2f(46, 106), cv::Point2f(45, 106), cv::Point2f(44, 106), cv::Point2f(43, 106), cv::Point2f(42, 106), cv::Point2f(41, 106), cv::Point2f(40, 106), cv::Point2f(39, 106), cv::Point2f(38, 106), cv::Point2f(37, 106), cv::Point2f(36, 106), cv::Point2f(35, 106), cv::Point2f(34, 106), cv::Point2f(33, 106), cv::Point2f(32, 106), cv::Point2f(31, 106), cv::Point2f(30, 106), cv::Point2f(29, 106), cv::Point2f(28, 106), cv::Point2f(27, 106), cv::Point2f(26, 106), cv::Point2f(25, 106), cv::Point2f(24, 106), cv::Point2f(23, 106), cv::Point2f(22, 106), cv::Point2f(21, 106), cv::Point2f(20, 106), cv::Point2f(19, 106), cv::Point2f(18, 106), cv::Point2f(17, 106), cv::Point2f(16, 106), cv::Point2f(15, 106), cv::Point2f(14, 106), cv::Point2f(13, 106), cv::Point2f(12, 106), cv::Point2f(11, 106), cv::Point2f(10, 106)};
    //dół
    std::vector<cv::Point2f> vec2 = {cv::Point2f(101, 7), cv::Point2f(101, 8), cv::Point2f(101, 9), cv::Point2f(101, 10), cv::Point2f(101, 11), cv::Point2f(100, 12), cv::Point2f(100, 13), cv::Point2f(100, 14), cv::Point2f(100, 15), cv::Point2f(100, 16), cv::Point2f(100, 17), cv::Point2f(100, 18), cv::Point2f(100, 19), cv::Point2f(100, 20), cv::Point2f(100, 21), cv::Point2f(100, 22), cv::Point2f(100, 23), cv::Point2f(100, 24), cv::Point2f(100, 25), cv::Point2f(100, 26), cv::Point2f(100, 27), cv::Point2f(100, 28), cv::Point2f(100, 29), cv::Point2f(100, 30), cv::Point2f(100, 31), cv::Point2f(100, 32), cv::Point2f(100, 33), cv::Point2f(100, 34), cv::Point2f(100, 35), cv::Point2f(100, 36), cv::Point2f(100, 37), cv::Point2f(100, 38), cv::Point2f(100, 39), cv::Point2f(100, 40), cv::Point2f(100, 41), cv::Point2f(100, 42), cv::Point2f(100, 43), cv::Point2f(100, 44), cv::Point2f(100, 45), cv::Point2f(100, 46), cv::Point2f(100, 47), cv::Point2f(100, 48), cv::Point2f(100, 49), cv::Point2f(100, 50), cv::Point2f(100, 51), cv::Point2f(100, 52), cv::Point2f(100, 53), cv::Point2f(100, 54), cv::Point2f(100, 55), cv::Point2f(100, 56), cv::Point2f(100, 57), cv::Point2f(100, 58), cv::Point2f(100, 59), cv::Point2f(100, 60), cv::Point2f(100, 61), cv::Point2f(100, 62), cv::Point2f(100, 63), cv::Point2f(99, 64), cv::Point2f(99, 65), cv::Point2f(99, 66), cv::Point2f(99, 67), cv::Point2f(99, 68), cv::Point2f(99, 69), cv::Point2f(99, 70), cv::Point2f(99, 71), cv::Point2f(98, 71), cv::Point2f(98, 72), cv::Point2f(98, 73), cv::Point2f(98, 74), cv::Point2f(98, 75), cv::Point2f(98, 76), cv::Point2f(98, 77), cv::Point2f(98, 78), cv::Point2f(98, 79), cv::Point2f(98, 80), cv::Point2f(98, 81), cv::Point2f(98, 82), cv::Point2f(98, 83), cv::Point2f(98, 84), cv::Point2f(98, 85), cv::Point2f(98, 86), cv::Point2f(98, 87), cv::Point2f(98, 88), cv::Point2f(98, 89), cv::Point2f(98, 90), cv::Point2f(98, 91), cv::Point2f(98, 92), cv::Point2f(98, 93), cv::Point2f(98, 94), cv::Point2f(98, 95), cv::Point2f(98, 96), cv::Point2f(98, 97), cv::Point2f(98, 98), cv::Point2f(98, 99), cv::Point2f(98, 100), cv::Point2f(98, 101), cv::Point2f(98, 102), cv::Point2f(98, 103), cv::Point2f(98, 104), cv::Point2f(98, 105), cv::Point2f(98, 106), cv::Point2f(98, 107), cv::Point2f(98, 108), cv::Point2f(98, 109), cv::Point2f(98, 110), cv::Point2f(98, 111), cv::Point2f(98, 112), cv::Point2f(98, 113), cv::Point2f(98, 114), cv::Point2f(98, 115), cv::Point2f(98, 116), cv::Point2f(98, 117), cv::Point2f(98, 118), cv::Point2f(98, 119), cv::Point2f(98, 120), cv::Point2f(98, 121), cv::Point2f(98, 122), cv::Point2f(98, 123), cv::Point2f(98, 124), cv::Point2f(97, 124), cv::Point2f(97, 125), cv::Point2f(97, 126), cv::Point2f(97, 127), cv::Point2f(97, 128), cv::Point2f(97, 129), cv::Point2f(97, 130), cv::Point2f(97, 131), cv::Point2f(97, 132), cv::Point2f(97, 133), cv::Point2f(97, 134), cv::Point2f(97, 135), cv::Point2f(97, 136), cv::Point2f(97, 137), cv::Point2f(97, 138), cv::Point2f(97, 139), cv::Point2f(97, 140), cv::Point2f(97, 141), cv::Point2f(97, 142), cv::Point2f(97, 143), cv::Point2f(97, 144), cv::Point2f(97, 145), cv::Point2f(97, 146), cv::Point2f(97, 147), cv::Point2f(97, 148), cv::Point2f(97, 149), cv::Point2f(97, 150), cv::Point2f(97, 151), cv::Point2f(97, 152), cv::Point2f(97, 153), cv::Point2f(97, 154), cv::Point2f(97, 155), cv::Point2f(97, 156), cv::Point2f(97, 157), cv::Point2f(97, 158), cv::Point2f(97, 159), cv::Point2f(97, 160), cv::Point2f(97, 161), cv::Point2f(97, 162), cv::Point2f(97, 163), cv::Point2f(97, 164), cv::Point2f(97, 165), cv::Point2f(97, 166), cv::Point2f(97, 167), cv::Point2f(97, 168), cv::Point2f(97, 169), cv::Point2f(97, 170), cv::Point2f(97, 171), cv::Point2f(97, 172), cv::Point2f(97, 173), cv::Point2f(97, 174), cv::Point2f(97, 175), cv::Point2f(97, 176), cv::Point2f(97, 177), cv::Point2f(97, 178), cv::Point2f(97, 179), cv::Point2f(97, 180), cv::Point2f(97, 181), cv::Point2f(97, 182), cv::Point2f(97, 183), cv::Point2f(97, 184), cv::Point2f(97, 185), cv::Point2f(97, 186), cv::Point2f(97, 187), cv::Point2f(97, 188)};
    //góra
    std::vector<cv::Point2f> vec3 = {cv::Point2f(98, 185), cv::Point2f(98, 184), cv::Point2f(98, 183), cv::Point2f(98, 182), cv::Point2f(98, 181), cv::Point2f(98, 180), cv::Point2f(98, 179), cv::Point2f(98, 178), cv::Point2f(98, 177), cv::Point2f(98, 176), cv::Point2f(98, 175), cv::Point2f(98, 174), cv::Point2f(98, 173), cv::Point2f(98, 172), cv::Point2f(98, 171), cv::Point2f(98, 170), cv::Point2f(98, 169), cv::Point2f(99, 169), cv::Point2f(99, 168), cv::Point2f(99, 167), cv::Point2f(99, 166), cv::Point2f(99, 165), cv::Point2f(99, 164), cv::Point2f(99, 163), cv::Point2f(99, 162), cv::Point2f(99, 161), cv::Point2f(99, 160), cv::Point2f(99, 159), cv::Point2f(99, 158), cv::Point2f(99, 157), cv::Point2f(99, 156), cv::Point2f(99, 155), cv::Point2f(99, 154), cv::Point2f(99, 153), cv::Point2f(99, 152), cv::Point2f(99, 151), cv::Point2f(99, 150), cv::Point2f(99, 149), cv::Point2f(99, 148), cv::Point2f(99, 147), cv::Point2f(99, 146), cv::Point2f(99, 145), cv::Point2f(99, 144), cv::Point2f(99, 143), cv::Point2f(99, 142), cv::Point2f(99, 141), cv::Point2f(99, 140), cv::Point2f(99, 139), cv::Point2f(99, 138), cv::Point2f(99, 137), cv::Point2f(99, 136), cv::Point2f(99, 135), cv::Point2f(100, 135), cv::Point2f(100, 134), cv::Point2f(100, 133), cv::Point2f(100, 132), cv::Point2f(100, 131), cv::Point2f(100, 130), cv::Point2f(100, 129), cv::Point2f(100, 128), cv::Point2f(100, 127), cv::Point2f(100, 126), cv::Point2f(100, 125), cv::Point2f(100, 124), cv::Point2f(100, 123), cv::Point2f(100, 122), cv::Point2f(100, 121), cv::Point2f(100, 120), cv::Point2f(100, 119), cv::Point2f(100, 118), cv::Point2f(100, 117), cv::Point2f(100, 116), cv::Point2f(100, 115), cv::Point2f(100, 114), cv::Point2f(100, 113), cv::Point2f(100, 112), cv::Point2f(100, 111), cv::Point2f(100, 110), cv::Point2f(100, 109), cv::Point2f(100, 108), cv::Point2f(100, 107), cv::Point2f(100, 106), cv::Point2f(100, 105), cv::Point2f(100, 104), cv::Point2f(100, 103), cv::Point2f(100, 102), cv::Point2f(100, 101), cv::Point2f(100, 100), cv::Point2f(100, 99), cv::Point2f(100, 98), cv::Point2f(100, 97), cv::Point2f(100, 96), cv::Point2f(100, 95), cv::Point2f(100, 94), cv::Point2f(100, 93), cv::Point2f(100, 92), cv::Point2f(100, 91), cv::Point2f(100, 90), cv::Point2f(100, 89), cv::Point2f(100, 88), cv::Point2f(100, 87), cv::Point2f(100, 86), cv::Point2f(100, 85), cv::Point2f(100, 84), cv::Point2f(100, 83), cv::Point2f(100, 82), cv::Point2f(100, 81), cv::Point2f(100, 80), cv::Point2f(100, 79), cv::Point2f(100, 78), cv::Point2f(100, 77), cv::Point2f(100, 76), cv::Point2f(100, 75), cv::Point2f(100, 74), cv::Point2f(100, 73), cv::Point2f(100, 72), cv::Point2f(100, 71), cv::Point2f(100, 70), cv::Point2f(100, 69), cv::Point2f(100, 68), cv::Point2f(100, 67), cv::Point2f(100, 66), cv::Point2f(100, 65), cv::Point2f(100, 64), cv::Point2f(100, 63), cv::Point2f(100, 62), cv::Point2f(100, 61), cv::Point2f(100, 60), cv::Point2f(100, 59), cv::Point2f(100, 58), cv::Point2f(100, 57), cv::Point2f(100, 56), cv::Point2f(100, 55), cv::Point2f(100, 54), cv::Point2f(100, 53), cv::Point2f(100, 52), cv::Point2f(100, 51), cv::Point2f(100, 50), cv::Point2f(100, 49), cv::Point2f(100, 48), cv::Point2f(100, 47), cv::Point2f(100, 46), cv::Point2f(100, 45), cv::Point2f(100, 44), cv::Point2f(100, 43), cv::Point2f(100, 42), cv::Point2f(100, 41), cv::Point2f(100, 40), cv::Point2f(100, 39), cv::Point2f(100, 38), cv::Point2f(100, 37), cv::Point2f(100, 36), cv::Point2f(100, 35), cv::Point2f(100, 34), cv::Point2f(100, 33), cv::Point2f(100, 32), cv::Point2f(100, 31), cv::Point2f(100, 30), cv::Point2f(100, 29), cv::Point2f(100, 28), cv::Point2f(100, 27), cv::Point2f(100, 26), cv::Point2f(100, 25), cv::Point2f(100, 24), cv::Point2f(100, 23), cv::Point2f(100, 22), cv::Point2f(100, 21), cv::Point2f(100, 20), cv::Point2f(100, 19), cv::Point2f(100, 18), cv::Point2f(100, 17), cv::Point2f(100, 16), cv::Point2f(100, 15), cv::Point2f(100, 14), cv::Point2f(100, 13), cv::Point2f(100, 12), cv::Point2f(100, 11)};
    //U
    std::vector<cv::Point2f> vec4 = {cv::Point2f(25, 28), cv::Point2f(25, 29), cv::Point2f(25, 30), cv::Point2f(25, 31), cv::Point2f(25, 32), cv::Point2f(25, 33), cv::Point2f(25, 34), cv::Point2f(25, 35), cv::Point2f(25, 36), cv::Point2f(25, 37), cv::Point2f(25, 38), cv::Point2f(25, 39), cv::Point2f(25, 40), cv::Point2f(25, 41), cv::Point2f(25, 42), cv::Point2f(25, 43), cv::Point2f(25, 44), cv::Point2f(25, 45), cv::Point2f(25, 46), cv::Point2f(25, 47), cv::Point2f(25, 48), cv::Point2f(25, 49), cv::Point2f(25, 50), cv::Point2f(25, 51), cv::Point2f(25, 52), cv::Point2f(25, 53), cv::Point2f(25, 54), cv::Point2f(25, 55), cv::Point2f(25, 56), cv::Point2f(26, 56), cv::Point2f(26, 57), cv::Point2f(26, 58), cv::Point2f(26, 59), cv::Point2f(26, 60), cv::Point2f(26, 61), cv::Point2f(26, 62), cv::Point2f(26, 63), cv::Point2f(26, 64), cv::Point2f(27, 64), cv::Point2f(27, 65), cv::Point2f(27, 66), cv::Point2f(27, 67), cv::Point2f(27, 68), cv::Point2f(28, 68), cv::Point2f(28, 69), cv::Point2f(28, 70), cv::Point2f(28, 71), cv::Point2f(29, 71), cv::Point2f(29, 72), cv::Point2f(29, 73), cv::Point2f(29, 74), cv::Point2f(29, 75), cv::Point2f(30, 75), cv::Point2f(30, 76), cv::Point2f(30, 77), cv::Point2f(30, 78), cv::Point2f(31, 79), cv::Point2f(31, 80), cv::Point2f(31, 81), cv::Point2f(32, 82), cv::Point2f(32, 83), cv::Point2f(32, 84), cv::Point2f(33, 85), cv::Point2f(33, 86), cv::Point2f(33, 87), cv::Point2f(34, 88), cv::Point2f(34, 89), cv::Point2f(34, 90), cv::Point2f(35, 91), cv::Point2f(35, 92), cv::Point2f(36, 93), cv::Point2f(36, 94), cv::Point2f(36, 95), cv::Point2f(36, 96), cv::Point2f(37, 96), cv::Point2f(37, 97), cv::Point2f(37, 98), cv::Point2f(38, 98), cv::Point2f(38, 99), cv::Point2f(38, 100), cv::Point2f(39, 100), cv::Point2f(39, 101), cv::Point2f(39, 102), cv::Point2f(40, 103), cv::Point2f(40, 104), cv::Point2f(40, 105), cv::Point2f(41, 105), cv::Point2f(41, 106), cv::Point2f(41, 107), cv::Point2f(42, 107), cv::Point2f(42, 108), cv::Point2f(43, 108), cv::Point2f(43, 109), cv::Point2f(43, 110), cv::Point2f(44, 110), cv::Point2f(44, 111), cv::Point2f(44, 112), cv::Point2f(45, 112), cv::Point2f(45, 113), cv::Point2f(46, 114), cv::Point2f(46, 115), cv::Point2f(47, 116), cv::Point2f(47, 117), cv::Point2f(47, 118), cv::Point2f(48, 118), cv::Point2f(48, 119), cv::Point2f(48, 120), cv::Point2f(48, 121), cv::Point2f(49, 122), cv::Point2f(49, 123), cv::Point2f(50, 123), cv::Point2f(50, 124), cv::Point2f(51, 124), cv::Point2f(51, 125), cv::Point2f(52, 125), cv::Point2f(52, 126), cv::Point2f(53, 127), cv::Point2f(54, 128), cv::Point2f(55, 129), cv::Point2f(55, 130), cv::Point2f(56, 130), cv::Point2f(57, 131), cv::Point2f(58, 131), cv::Point2f(58, 132), cv::Point2f(59, 132), cv::Point2f(60, 133), cv::Point2f(61, 133), cv::Point2f(61, 134), cv::Point2f(62, 134), cv::Point2f(62, 135), cv::Point2f(63, 135), cv::Point2f(63, 136), cv::Point2f(64, 136), cv::Point2f(65, 136), cv::Point2f(65, 137), cv::Point2f(66, 137), cv::Point2f(67, 138), cv::Point2f(68, 138), cv::Point2f(68, 139), cv::Point2f(69, 139), cv::Point2f(70, 139), cv::Point2f(70, 140), cv::Point2f(71, 140), cv::Point2f(72, 140), cv::Point2f(73, 141), cv::Point2f(74, 141), cv::Point2f(75, 141), cv::Point2f(76, 142), cv::Point2f(77, 142), cv::Point2f(78, 142), cv::Point2f(79, 143), cv::Point2f(80, 143), cv::Point2f(81, 143), cv::Point2f(82, 143), cv::Point2f(82, 144), cv::Point2f(83, 144), cv::Point2f(84, 144), cv::Point2f(85, 144), cv::Point2f(86, 144), cv::Point2f(87, 145), cv::Point2f(88, 145), cv::Point2f(89, 145), cv::Point2f(90, 145), cv::Point2f(91, 145), cv::Point2f(91, 146), cv::Point2f(92, 146), cv::Point2f(93, 146), cv::Point2f(94, 146), cv::Point2f(95, 146), cv::Point2f(96, 146), cv::Point2f(97, 146), cv::Point2f(98, 146), cv::Point2f(99, 146), cv::Point2f(100, 146), cv::Point2f(101, 146), cv::Point2f(102, 146), cv::Point2f(103, 146), cv::Point2f(104, 146), cv::Point2f(105, 146), cv::Point2f(106, 146), cv::Point2f(107, 146), cv::Point2f(108, 146), cv::Point2f(109, 146), cv::Point2f(110, 146), cv::Point2f(111, 146), cv::Point2f(111, 145), cv::Point2f(112, 145), cv::Point2f(113, 145), cv::Point2f(113, 144), cv::Point2f(114, 144), cv::Point2f(114, 143), cv::Point2f(115, 143), cv::Point2f(115, 142), cv::Point2f(116, 142), cv::Point2f(117, 141), cv::Point2f(118, 141), cv::Point2f(118, 140), cv::Point2f(119, 140), cv::Point2f(119, 139), cv::Point2f(120, 139), cv::Point2f(121, 138), cv::Point2f(122, 138), cv::Point2f(122, 137), cv::Point2f(123, 137), cv::Point2f(123, 136), cv::Point2f(124, 136), cv::Point2f(125, 135), cv::Point2f(126, 134), cv::Point2f(127, 133), cv::Point2f(128, 133), cv::Point2f(128, 132), cv::Point2f(129, 132), cv::Point2f(129, 131), cv::Point2f(130, 131), cv::Point2f(131, 130), cv::Point2f(132, 130), cv::Point2f(132, 129), cv::Point2f(133, 128), cv::Point2f(134, 128), cv::Point2f(134, 127), cv::Point2f(135, 127), cv::Point2f(136, 127), cv::Point2f(136, 126), cv::Point2f(137, 125), cv::Point2f(138, 124), cv::Point2f(139, 123), cv::Point2f(140, 123), cv::Point2f(140, 122), cv::Point2f(141, 122), cv::Point2f(141, 121), cv::Point2f(142, 121), cv::Point2f(142, 120), cv::Point2f(143, 120), cv::Point2f(143, 119), cv::Point2f(144, 119), cv::Point2f(144, 118), cv::Point2f(145, 118), cv::Point2f(145, 117), cv::Point2f(146, 117), cv::Point2f(146, 116), cv::Point2f(146, 115), cv::Point2f(147, 115), cv::Point2f(147, 114), cv::Point2f(148, 113), cv::Point2f(148, 112), cv::Point2f(149, 111), cv::Point2f(149, 110), cv::Point2f(150, 110), cv::Point2f(150, 109), cv::Point2f(150, 108), cv::Point2f(151, 108), cv::Point2f(151, 107), cv::Point2f(151, 106), cv::Point2f(152, 106), cv::Point2f(152, 105), cv::Point2f(153, 104), cv::Point2f(153, 103), cv::Point2f(153, 102), cv::Point2f(153, 101), cv::Point2f(153, 100), cv::Point2f(154, 100), cv::Point2f(154, 99), cv::Point2f(155, 98), cv::Point2f(155, 97), cv::Point2f(156, 96), cv::Point2f(156, 95), cv::Point2f(157, 95), cv::Point2f(157, 94), cv::Point2f(158, 93), cv::Point2f(158, 92), cv::Point2f(159, 91), cv::Point2f(159, 90), cv::Point2f(160, 90), cv::Point2f(160, 89), cv::Point2f(160, 88), cv::Point2f(161, 88), cv::Point2f(161, 87), cv::Point2f(162, 86), cv::Point2f(162, 85), cv::Point2f(162, 84), cv::Point2f(163, 84), cv::Point2f(163, 83), cv::Point2f(164, 82), cv::Point2f(164, 81), cv::Point2f(165, 80), cv::Point2f(165, 79), cv::Point2f(165, 78), cv::Point2f(165, 77), cv::Point2f(166, 77), cv::Point2f(166, 76), cv::Point2f(166, 75), cv::Point2f(166, 74), cv::Point2f(167, 74), cv::Point2f(167, 73), cv::Point2f(167, 72), cv::Point2f(167, 71), cv::Point2f(167, 70), cv::Point2f(167, 69), cv::Point2f(168, 69), cv::Point2f(168, 68), cv::Point2f(168, 67), cv::Point2f(168, 66), cv::Point2f(168, 65), cv::Point2f(168, 64), cv::Point2f(168, 63), cv::Point2f(168, 62), cv::Point2f(169, 61), cv::Point2f(169, 60), cv::Point2f(169, 59), cv::Point2f(169, 58), cv::Point2f(169, 57), cv::Point2f(169, 56), cv::Point2f(169, 55), cv::Point2f(169, 54), cv::Point2f(169, 53), cv::Point2f(169, 52), cv::Point2f(169, 51), cv::Point2f(169, 50), cv::Point2f(170, 50), cv::Point2f(170, 49), cv::Point2f(170, 48), cv::Point2f(170, 47), cv::Point2f(170, 46), cv::Point2f(170, 45), cv::Point2f(170, 44), cv::Point2f(170, 43), cv::Point2f(170, 42), cv::Point2f(170, 41), cv::Point2f(170, 40), cv::Point2f(170, 39), cv::Point2f(170, 38), cv::Point2f(170, 37), cv::Point2f(170, 36), cv::Point2f(170, 35), cv::Point2f(170, 34)};
    pattern_table.push_back(vec0);
    pattern_table.push_back(vec1);
    pattern_table.push_back(vec2);
    pattern_table.push_back(vec3);
    pattern_table.push_back(vec4);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qRegisterMetaType<std::vector<cv::Point2f>>();

    camImg = new videothread(this);

    //połączenie sygnał slot
    connect(camImg, SIGNAL(NewCamImg(QImage)), this, SLOT(onNewCamImg(QImage)));
    //Qt::DirectConnection
    //connect(camImg, SIGNAL(NewCamImg(QImage)), this, SLOT(onNewCamImg(QImage)), Qt::BlockingQueuedConnection);
    connect(camImg, SIGNAL(emitGesture(std::vector<cv::Point2f>)), this, SLOT(onEmitGesture(std::vector<cv::Point2f>)));
    connect(camImg, SIGNAL(emitMultiGesture(std::vector<std::vector<cv::Point2f>>)), this, SLOT(onEmitMultiGesture(std::vector<std::vector<cv::Point2f>>)));

    connect(this, SIGNAL(setScalarMin(cv::Scalar)), camImg, SLOT(getScalarMin(cv::Scalar)));
    connect(this, SIGNAL(setScalarMax(cv::Scalar)), camImg, SLOT(getScalarMax(cv::Scalar)));

    savePattern = true;
    setPatterns(pattern_table);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNewCamImg(QImage qimg)
{
    ui->img->setPixmap(QPixmap::fromImage(qimg).scaled(ui->img->width(),ui->img->height()));
}


QString recognizeGest(bool savePattern, std::vector<std::vector<cv::Point2f>> pattern_table, std::list<QString> name_gesture, std::vector<cv::Point2f> gesture)
{
    if(savePattern)
    {
        try
        {
            //czarek -> WEKTOR KORELACJI
//            std::vector<cv::Mat> correlaations_vector;
            qDebug() << "Początek try catcha";
            std::vector<float> correlaations_vector;
            cv::Mat corr;

            QString qstr;
            float max_elem;
            int index;

            //czarek -> korelacje z gestami dla każdego z zapisanego wektorow
            qDebug() << "czarek -> korelacje z gestami dla każdego z zapisanego wektorow";
            for(int i = 0; i < (int)pattern_table.size(); i++){
                //Czarek -> projektowane na 5 gestów

                cv::matchTemplate(pattern_table.at(i), gesture, corr, cv::TM_CCOEFF_NORMED);
//                qDebug()<<corr.at<float>(0,0);
                correlaations_vector.push_back(corr.at<float>(0,0));
            }

            //Czarek -> max element

            if(!correlaations_vector.empty()){

                max_elem = correlaations_vector.at(0);
                index = 0;


                for(int i= 0 ; i < (int)correlaations_vector.size(); i++){
                    qDebug()<<correlaations_vector.at(i);

                    if(correlaations_vector.at(i) > max_elem){
                        max_elem = correlaations_vector.at(i);
                        index = i;
                    }
                   qDebug()<<"MAX_VALUE: "<<max_elem;
                   qDebug()<<"index: "<<index;
                   //iteracja po liście
                   std::list<QString>::iterator it = name_gesture.begin();
                   std::advance(it, index);
                   qstr = *it;
                   qDebug()<<"GEST: "<< qstr;
                }
            }

//            cv::matchTemplate(pattern, gesture, corr, cv::TM_CCOEFF_NORMED);
        //qDebug()<<corr.at<float>(0,0);
            return qstr;
        }
        catch (cv::Exception& e) {
            qDebug()<<e.what();
        }
    }
    return "";
}


//czarek -> wykrywany gest
void MainWindow::onEmitGesture(std::vector<cv::Point2f> g)
{
//    for(int i=0;i<g.size();i++)
//    {
//        qDebug()<<g[i].x<<";"<<g[i].y;
//    }
    gesture = g;

    QString qstr = recognizeGest(savePattern, pattern_table, name_gesture, gesture);
    if (qstr != "") ui->label->setText(qstr);
}


void MainWindow::onEmitMultiGesture(std::vector<std::vector<cv::Point2f>> mg)
{
    std::vector<cv::Point2f> gesture0 = mg.at(0);
    std::vector<cv::Point2f> gesture1 = mg.at(0);

    QString qstr0 = recognizeGest(savePattern, pattern_table, name_gesture, gesture0);
    QString qstr1 = recognizeGest(savePattern, pattern_table, name_gesture, gesture1);

    //gesty przybliżania i oddalania
    if (qstr0 == "LEFT" && qstr1 == "RIGHT") ui->label->setText("ZOOM IN HORIZONTAL");
    if (qstr0 == "RIGHT" && qstr1 == "LEFT") ui->label->setText("ZOOM OUT HORIZONTAL");
    if (qstr0 == "UP" && qstr1 == "DOWN") ui->label->setText("ZOOM IN VERTICAL");
    if (qstr0 == "DOWN" && qstr1 == "UP") ui->label->setText("ZOOM OUT VERTICAL");
    //gesty skrolowania
    if (qstr0 == "DOWN" && qstr1 == "DOWN") ui->label->setText("SCROLL UP");
    if (qstr0 == "UP" && qstr1 == "UP") ui->label->setText("SCROLL DOWN");
    if (qstr0 == "RIGHT" && qstr1 == "RIGHT") ui->label->setText("SCROLL LEFT");
    if (qstr0 == "LEFT" && qstr1 == "LEFT") ui->label->setText("SCROLL RIGHT");
}


void MainWindow::on_pushButton_clicked()
{
    //QString fileName = QFileDialog::getOpenFileName(this, tr("Open Video"), "../", tr("Image Files (*.mp4 *.avi *.wav)"));
    camImg->videoInit("fileName");
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    hsvmin.val[0] = value;
    // = cv::Scalar(hmin, smin, vmin);
    emit setScalarMin(hsvmin);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    hsvmin.val[1] = value;
    smin = value;
    emit setScalarMin(hsvmin);
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    hsvmin.val[2] = value;
    vmin = value;
    emit setScalarMin(hsvmin);
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    hsvmax.val[0] = value;
    emit setScalarMax(hsvmax);
}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    hsvmax.val[1] = value;
    emit setScalarMax(hsvmax);
}

void MainWindow::on_horizontalSlider_6_valueChanged(int value)
{
    hsvmax.val[2] = value;
    emit setScalarMax(hsvmax);
}

void MainWindow::on_pushButton_2_clicked()
{
    //savePattern = true;
    pattern = gesture;

    //Czarek -> dodanie do tablicy + wypisanie indexu
    pattern_table.push_back(pattern);
    qDebug()<<pattern_table.size();

    //Dodanie nazwy - numer indeksu
    name_gesture.push_back(QString::number(pattern_table.size()));

//    //Czarek -> wypisanie zapisanego gestu
//    for(int i=0;i<pattern_to_table.at(pattern_to_table.size() - 1).size();i++)
//    {
//        qDebug()<<pattern_to_table.at(pattern_to_table.size() - 1)[i].x<<";"<<pattern_to_table.at(pattern_to_table.size() - 1)[i].y;
//    }

}
