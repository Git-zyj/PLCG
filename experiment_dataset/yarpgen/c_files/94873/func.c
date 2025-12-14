/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94873
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-108)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) var_7))));
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_3 [i_1 + 1] [i_1 - 1])))), (((unsigned long long int) arr_3 [i_1 - 1] [i_1 + 1]))));
                var_15 = ((signed char) (unsigned char)16);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) var_8)), (var_12))))))));
                            var_17 ^= ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_3]) : (arr_1 [i_5])))));
                            arr_14 [i_5] [i_5] [i_3] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (6359784851232975915LL) : (-6359784851232975919LL)))));
                            arr_15 [i_3] [i_3] [0LL] [(_Bool)1] = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (max((arr_0 [i_3] [i_3]), (var_1)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_12 [i_2] [i_3] [i_2] [i_3] [i_3] [i_2]), (arr_12 [(unsigned short)4] [i_3] [i_2] [i_3] [i_3] [(short)7])))) ? (((unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (arr_0 [i_2] [i_3]) : (var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3))))))))))));
            }
        } 
    } 
    var_19 += ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17898915211149721555ULL))), (var_0)))) ? (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))));
    var_20 = ((/* implicit */short) var_6);
}
