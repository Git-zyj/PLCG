/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88575
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
    var_10 = ((/* implicit */unsigned char) max(((-(((8065211045239679743ULL) / (((/* implicit */unsigned long long int) -1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1382043287)) ? (-12LL) : (262143LL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-262143LL))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (~((-(-12LL))))))));
                                var_12 = ((/* implicit */long long int) ((15303510971577021598ULL) == (((/* implicit */unsigned long long int) -5013258658800583858LL))));
                                var_13 = ((/* implicit */unsigned int) ((((-3299913548791997487LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((arr_9 [i_1]) ? (2147483647) : (((/* implicit */int) arr_2 [i_2] [i_4])))))));
                                arr_13 [11] [i_3] [i_4] [i_1 - 1] [i_0] = ((/* implicit */_Bool) var_0);
                                arr_14 [i_0] [i_1 - 1] [i_4] [(signed char)8] [i_4] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) ? (((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (0ULL))) : (((/* implicit */unsigned long long int) (~(759899838))))));
                                arr_21 [i_6] [i_5] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) var_7);
                                arr_22 [i_0] [i_1 - 1] [i_2 + 3] [i_2] [5U] [i_6] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)7)))) + (2147483647))) >> ((((~(985972131))) + (985972153)))));
                            }
                        } 
                    } 
                    arr_23 [i_1 - 2] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) == (((/* implicit */int) (short)-9075))))) - (((/* implicit */int) arr_8 [i_2 + 4] [i_1 - 2] [i_0] [i_0]))));
                }
            } 
        } 
    }
    var_14 &= ((/* implicit */_Bool) var_5);
}
