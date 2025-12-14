/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89986
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
    var_17 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) (-((+(9223372036854775807LL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned short) (~(4294967295U)));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((unsigned long long int) arr_14 [i_0] [i_3] [i_2 - 2] [i_3] [i_4 + 2])) : (((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_3] [i_2 + 2] [i_1] [i_4 + 2]), (arr_14 [i_0] [i_3] [i_2 + 1] [i_3] [i_4 + 2]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(unsigned short)12])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [(unsigned char)9])) : (((/* implicit */int) (signed char)88)))) : (((((/* implicit */_Bool) arr_8 [7LL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_8 [(unsigned char)6] [i_1] [i_1] [3LL])))));
                var_20 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 0)), (3191768465117738651LL)))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0])) : (-1089387724))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [12LL] [i_1]))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)125)))) ? (((/* implicit */int) arr_10 [i_0] [i_6] [i_6] [i_0])) : (-15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) arr_8 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 2]))))));
                            var_23 = ((/* implicit */unsigned char) 4463532564444907384ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
