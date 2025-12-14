/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61652
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
    var_10 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) > (317975965862171254LL))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)245), ((unsigned char)238)))))))) : (var_4)));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */int) var_7)) >> (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) << (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (7684647434202646737LL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((var_9) ? (arr_1 [i_0]) : (arr_1 [i_0]))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((arr_1 [i_0]) << (((var_8) - (17778181600227539276ULL))))) - (13135320796371650797ULL)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] [i_0] [15LL] [i_2] = ((((((((/* implicit */_Bool) (unsigned char)91)) && (((/* implicit */_Bool) var_7)))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_2])) : (((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) -7684647434202646739LL)));
                            var_13 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_2 + 2] [i_0] [i_0] [i_2 + 2])))) + ((-(arr_6 [i_2 + 1] [i_2 - 1] [3ULL] [i_2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
