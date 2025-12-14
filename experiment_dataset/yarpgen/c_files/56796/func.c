/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56796
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)70)) / (((/* implicit */int) max(((signed char)70), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */int) ((_Bool) -979408428))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [5ULL] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (~(((arr_2 [i_0] [i_1 + 2] [i_0]) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (signed char)18)))) : (((/* implicit */int) (_Bool)1))))));
                            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [6] [i_0 - 1] [i_0] [6])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))) : (arr_8 [i_0] [i_0] [i_1] [i_1 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((3868306388656347321LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            arr_12 [i_2] [5LL] = ((/* implicit */signed char) min((arr_9 [i_0] [i_1] [2U] [i_2] [i_2] [i_3]), (((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) & (((var_14) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_1]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) (unsigned char)129);
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 13; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1337895305860551061LL), (((/* implicit */long long int) 979408427))))) ? (var_1) : (((/* implicit */int) (unsigned char)126))));
                            var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_4 + 2] [i_0])), (((((/* implicit */_Bool) arr_5 [i_0])) ? (68719476735ULL) : (var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((17158239167346147631ULL), (((/* implicit */unsigned long long int) -979408427))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 ^= ((/* implicit */_Bool) min((max((min((var_12), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (~(max((var_7), (var_7))))))));
}
