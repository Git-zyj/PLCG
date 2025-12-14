/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6638
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (var_7)))) ? ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_9)))) - ((~(((/* implicit */int) var_6))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(var_7))))));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (var_2)));
        }
        var_13 = ((/* implicit */unsigned short) (-(((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                                var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (var_7))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_9)), (var_0)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_1)) : (var_3)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_7)))) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) var_7)))))));
                        var_17 = ((/* implicit */long long int) (+((-(var_2)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) (~(var_5)));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_2))) : (((/* implicit */int) var_6))));
                        var_20 = ((/* implicit */signed char) ((int) ((unsigned int) var_6)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        for (int i_10 = 1; i_10 < 10; i_10 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_8))))))));
                                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(var_1)))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))), ((~((-(var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 8; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 9; i_12 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (var_2)))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_1))))));
                                var_24 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (var_1))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_1)))) ? (((/* implicit */long long int) (+(var_2)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_5)))))))));
                                var_25 &= ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (max((var_7), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_4)))))));
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) == (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) : (max((((/* implicit */unsigned int) var_9)), (var_1)))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_8)))))))) : (var_5)));
        var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_8))))) : (var_7))), (((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) | (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) var_2))))))));
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ^ (((/* implicit */long long int) var_1)))))))), ((+(((/* implicit */int) var_6))))));
    }
    for (long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) var_2))))) ? (max((((/* implicit */int) var_8)), (var_2))) : (var_2))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_9)))))))));
        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (var_1))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (min((((/* implicit */unsigned long long int) var_8)), (var_5)))))))));
        var_33 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(var_3))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))))));
        var_34 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))) ^ (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) var_1))))))) ? (min((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))));
    }
}
