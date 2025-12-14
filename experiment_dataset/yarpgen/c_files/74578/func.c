/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74578
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38616))) / (arr_6 [i_0] [i_1] [(unsigned short)12]))) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16992290674469242938ULL)) ? ((+(((/* implicit */int) (unsigned short)38616)))) : ((-(((/* implicit */int) (unsigned short)26919))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_1 + 2] [i_4] [i_4] [i_0] [i_1] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3 - 3])) ? (arr_10 [i_3] [i_1 + 4] [i_2] [i_3 - 2]) : (arr_10 [i_0] [i_2] [i_2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0ULL)))) : (((((/* implicit */_Bool) 1639993881U)) ? (arr_10 [i_0] [(_Bool)1] [i_2] [i_4]) : (arr_10 [i_0] [i_2] [i_2] [i_2])))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] [(unsigned short)0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)0))))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) > (1ULL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 3928917389452066365ULL))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((/* implicit */int) ((18446744073709551607ULL) > (((/* implicit */unsigned long long int) arr_4 [i_0])))))))) ? (((/* implicit */unsigned long long int) 668328024)) : ((-(min((((/* implicit */unsigned long long int) -7208161601959595790LL)), (arr_17 [i_0] [i_1 + 2] [i_0] [i_5] [i_5 + 2] [i_1]))))));
                                arr_20 [i_1] [i_1] [i_2] [i_1] [(signed char)2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) / ((-(((/* implicit */int) (signed char)83))))))));
                                arr_21 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_5 - 2] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_3))))) ? (((18446744073709551595ULL) & (var_4))) : (4632891453532935212ULL)))));
}
