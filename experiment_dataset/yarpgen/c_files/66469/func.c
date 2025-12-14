/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66469
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
    var_11 = var_8;
    var_12 = ((/* implicit */int) ((signed char) var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 7; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [(_Bool)1]))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0 + 3] [6U])))))) ? (min((((/* implicit */unsigned long long int) (signed char)97)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56)))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((_Bool) var_4)) ? (((/* implicit */unsigned int) ((int) ((int) -1)))) : (((var_4) >> (((((((/* implicit */int) (unsigned char)48)) & (((/* implicit */int) var_5)))) - (28))))))))));
                        }
                    } 
                } 
                var_15 |= ((/* implicit */int) max((var_0), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)199)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 16304014118303263568ULL))) ? (((((/* implicit */int) (unsigned char)200)) & (arr_13 [i_4]))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [i_5])) == (((/* implicit */int) (unsigned char)198)))))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) & (max((9223372036854775805LL), (((/* implicit */long long int) (unsigned char)56)))))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (arr_14 [i_4] [i_5] [i_4]) : (((/* implicit */unsigned long long int) -9223372036854775805LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_5])), (0ULL)))) ? (arr_11 [i_4]) : ((-(-9223372036854775802LL))))))))));
            }
        } 
    } 
}
