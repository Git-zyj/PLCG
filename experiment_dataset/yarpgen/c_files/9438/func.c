/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9438
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((max((2146435072ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)17522)))));
                        var_19 = ((/* implicit */unsigned long long int) min((((long long int) -432236712)), (((/* implicit */long long int) min((2207711124U), (((/* implicit */unsigned int) (unsigned char)232)))))));
                        arr_14 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)14736)) ? (((/* implicit */unsigned long long int) 432236693)) : (10288307264595754273ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1136792072)) ? (432236709) : (((/* implicit */int) (unsigned char)108)))))));
                    }
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 10288307264595754273ULL)) ? (432236712) : (((/* implicit */int) (unsigned char)7))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) (signed char)-32)), (3730170470U)))))));
                    arr_15 [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */short) min((((unsigned short) 3730170470U)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62691)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_21 [i_4] [i_2] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (432236724) : (432236705)))) ? (((((/* implicit */_Bool) (short)29072)) ? (((/* implicit */int) (unsigned short)44977)) : (((/* implicit */int) (unsigned short)2844)))) : (((/* implicit */int) (unsigned short)3785))));
                                arr_22 [i_0] [i_0] [i_0] [0U] [i_0] [i_0] [i_0 - 1] = max((15228105116228274982ULL), (((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) max(((unsigned short)62663), (((/* implicit */unsigned short) (short)30433)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_25 [i_6] = min((max((((/* implicit */unsigned int) (_Bool)1)), (1063202810U))), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1))));
        var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) 9007199254738944ULL))), (min(((unsigned short)62663), (((/* implicit */unsigned short) (unsigned char)9))))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_8);
}
