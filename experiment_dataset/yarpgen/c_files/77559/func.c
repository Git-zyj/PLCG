/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77559
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
    var_14 = ((/* implicit */unsigned char) var_8);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3776720828U)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)10)) : (var_9)))) ? (((((/* implicit */_Bool) -1925758844)) ? (var_11) : (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)143)) ? (16767308337987548852ULL) : (1679435735722002764ULL))))));
    var_16 |= ((1679435735722002763ULL) != (16767308337987548834ULL));
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = 1679435735722002763ULL;
                                var_19 = ((/* implicit */long long int) var_6);
                                arr_12 [i_4] [i_4] [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [18LL] [i_2] [i_4 + 2] [i_4 - 1] [18LL]))))) ? (((unsigned int) (short)32767)) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */short) var_5)))))));
                                var_20 ^= ((/* implicit */unsigned long long int) (-(1329504116U)));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-21884)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */long long int) var_2)), (arr_5 [i_1])))))));
                var_21 = (short)4170;
                var_22 = ((/* implicit */signed char) var_9);
            }
        } 
    } 
}
