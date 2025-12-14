/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6041
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
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)226))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [20LL] [i_0 - 2])))) && (((max((((/* implicit */long long int) arr_2 [(unsigned short)22])), (var_11))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_6))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0 - 2] [i_0] [i_0] [i_0 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) 11074161880463600712ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)50110)))))))) ? (((/* implicit */int) (signed char)-15)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
                            arr_10 [i_0 - 2] [(unsigned short)20] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_11 [11ULL] [i_1] [i_0] [i_3] = ((/* implicit */long long int) (unsigned short)7886);
                            var_23 -= ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((max((((/* implicit */int) min(((unsigned char)226), ((unsigned char)204)))), ((~(((/* implicit */int) arr_2 [16U])))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)4215)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)32093)))))))));
            }
        } 
    } 
}
