/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77464
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 699952066)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-30457))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_11 [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_2)))))))));
                                var_12 *= ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 10196226030261762912ULL)))))))));
                                var_13 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) 4177745946U))))))));
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -23))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                var_15 ^= ((/* implicit */short) (+((+((+(((/* implicit */int) (short)-31863))))))));
                var_16 = ((/* implicit */long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 4177745968U)))))))));
            }
        } 
    } 
}
