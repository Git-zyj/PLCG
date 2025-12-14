/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72213
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-6678)) ? (((((/* implicit */_Bool) ((unsigned short) 262143LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61)))))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -412397424);
                var_11 = ((/* implicit */int) max((3725399466505010131LL), (((/* implicit */long long int) (unsigned short)0))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_1 - 1]))))) ? (((/* implicit */unsigned int) -412397424)) : (((((/* implicit */_Bool) arr_0 [(unsigned char)13] [i_1 + 1])) ? (2814495302U) : (2446541369U)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])), (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                            var_14 = ((/* implicit */unsigned long long int) max((min(((unsigned short)0), ((unsigned short)0))), (((/* implicit */unsigned short) (unsigned char)248))));
                            var_15 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) max((-412397424), (arr_1 [i_1] [i_2])))) + (min((arr_8 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) 1848425926U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (528482304U)))) ? ((+(((/* implicit */int) (short)-29489)))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) max((-6023925925798755157LL), (((/* implicit */long long int) (unsigned char)158))))) ? (min((2446541369U), (((/* implicit */unsigned int) (unsigned short)49933)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                var_17 = max((((/* implicit */int) (short)28150)), (min((((((/* implicit */_Bool) (unsigned short)5)) ? (0) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) (unsigned short)4095)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)48150), (((/* implicit */unsigned short) var_7))))) ? (((unsigned long long int) min((((/* implicit */unsigned long long int) var_2)), (7249844806850427361ULL)))) : (var_3)));
}
