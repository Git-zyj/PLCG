/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56664
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % ((~(arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */long long int) var_7);
                    arr_8 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((max(((signed char)5), ((signed char)-105))), (((/* implicit */signed char) ((((/* implicit */_Bool) 13ULL)) || ((_Bool)1))))))) >> (((var_1) + (7394976138741140926LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11882105512240498466ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))))) ? (((unsigned int) 5456912606242145709LL)) : (((/* implicit */unsigned int) 2147483628))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_5)))), ((+(((/* implicit */int) var_4))))))) ^ (arr_13 [i_0] [i_0]))))));
                                var_17 -= ((/* implicit */long long int) (unsigned short)16192);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((3166220943151564212ULL), (((/* implicit */unsigned long long int) var_0))));
}
