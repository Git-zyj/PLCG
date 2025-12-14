/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68118
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)1008)))), (((/* implicit */int) var_5))));
    var_11 ^= ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (8136264231592119249ULL)))))) & (max(((+(var_1))), (var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) & (max((var_2), (var_6)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] = 18446744073709551592ULL;
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) < (((unsigned long long int) 15081424140656122573ULL))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_1)));
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) (-(1486527022014613542ULL))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_5] [i_5 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) ((16960217051694938065ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2160))))));
                    var_16 &= ((/* implicit */unsigned long long int) ((unsigned short) ((21ULL) * (var_7))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        arr_20 [i_0 - 1] [i_0 - 1] [i_1] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12909)) ? (var_2) : ((~(18446744073709551611ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62249)))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_2)));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (24ULL)));
                            var_19 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2157))) : (50ULL)))) ? (var_6) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (23ULL))));
                            var_20 = ((unsigned short) (unsigned short)20263);
                            var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned short) ((unsigned long long int) ((1694038917090300149ULL) > (37ULL))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(12488229227934171956ULL))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            arr_36 [i_0] [i_1] [i_5 - 2] [i_0] [i_10] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((unsigned long long int) var_4)));
                            arr_37 [i_0] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16960217051694938082ULL));
                            var_25 = ((var_1) | (((((/* implicit */_Bool) 18446744073709551597ULL)) ? (var_3) : (18446744073709551579ULL))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((var_7) << (((((/* implicit */int) var_4)) - (13894))))) != (((((/* implicit */_Bool) 1486527022014613541ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) : (var_3)))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        arr_40 [i_0] [i_0] [i_0] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_9))), (var_2)))) ? ((~(((unsigned long long int) 15029691340769745620ULL)))) : (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) (unsigned short)24576)), (22ULL))) : (max((18446744073709551614ULL), (var_7)))))));
                        arr_41 [i_0] [i_1] [i_0] [i_11 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) min((((((/* implicit */_Bool) (unsigned short)49152)) ? (var_0) : (var_6))), (((/* implicit */unsigned long long int) ((unsigned short) var_5))))));
                        var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) 2503506602347235071ULL))), ((+(((/* implicit */int) (unsigned short)24563))))));
                    }
                }
                arr_42 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
        } 
    } 
    var_28 = min((var_6), (((unsigned long long int) var_2)));
}
