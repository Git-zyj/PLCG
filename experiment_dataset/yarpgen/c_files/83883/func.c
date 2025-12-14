/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83883
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
    var_18 = ((/* implicit */unsigned int) var_9);
    var_19 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) + (((((/* implicit */int) arr_1 [i_1] [i_0])) - (((/* implicit */int) (unsigned char)1))))))) < (max((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) (_Bool)1))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) -9223372036854775802LL)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) && (((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) max(((unsigned char)48), ((unsigned char)237))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) var_14);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) << (((((unsigned long long int) 7648978011984800675ULL)) - (7648978011984800649ULL))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)10]))))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5901)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (short)-5902)))))));
            }
        } 
    } 
}
