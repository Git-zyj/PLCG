/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86910
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) < (var_13)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_16 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) 6562421749245856879LL)))) && (((((/* implicit */unsigned long long int) (+(6562421749245856874LL)))) >= (max((((/* implicit */unsigned long long int) 1339275088)), (var_3)))))));
                            var_17 += ((/* implicit */signed char) ((((/* implicit */long long int) ((int) arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1]))) / (max((((/* implicit */long long int) (unsigned char)133)), (-6562421749245856862LL)))));
                            arr_11 [i_1] [i_1] = ((((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))) ? (6103078327455172793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_1 - 2])))))));
                            var_18 = ((/* implicit */short) (_Bool)1);
                            arr_12 [i_1] [19LL] [i_1] [i_1] = (-(((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned int i_5 = 3; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_18 [i_4] [(_Bool)1] [i_4] [12LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned int) var_9)))) - (((/* implicit */unsigned int) ((-35579199) ^ (((/* implicit */int) (unsigned char)114)))))))) ? (((((((/* implicit */_Bool) arr_10 [i_0] [4ULL] [i_4] [i_0] [i_5] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (1255288416))) | (((/* implicit */int) ((1339275081) == (((/* implicit */int) var_4))))))) : (((/* implicit */int) min((arr_14 [i_4]), ((unsigned char)9))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10166)) ? (-5328986218836759146LL) : (((/* implicit */long long int) -1614509462))));
                            arr_19 [i_1] = ((/* implicit */short) ((int) max((arr_6 [i_1 - 2]), (((/* implicit */unsigned char) var_7)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_9))));
}
