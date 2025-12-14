/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75150
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
    var_11 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) ((_Bool) var_7))));
    var_12 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) ((unsigned long long int) (_Bool)1))));
    var_13 = ((/* implicit */unsigned short) ((int) ((int) 274877906943ULL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */short) ((long long int) ((_Bool) ((short) 18446744073709551615ULL))));
                    var_15 -= ((/* implicit */_Bool) ((long long int) ((unsigned short) ((unsigned char) var_1))));
                    var_16 ^= ((/* implicit */signed char) ((unsigned char) ((unsigned char) ((signed char) var_4))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_3] = ((signed char) ((short) ((unsigned long long int) var_3)));
                        var_17 = ((/* implicit */signed char) max((var_17), (((signed char) ((unsigned short) 274877906943ULL)))));
                        arr_12 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((signed char) ((_Bool) arr_7 [i_0]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((signed char) ((unsigned long long int) ((unsigned short) arr_14 [i_0] [i_2] [(signed char)19] [(unsigned char)13])))))));
                        arr_16 [i_0] [i_1] [i_2] [10LL] &= ((/* implicit */signed char) ((short) ((signed char) ((_Bool) arr_2 [(_Bool)1]))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            var_19 -= ((_Bool) ((_Bool) -728407769255375603LL));
                            var_20 -= ((/* implicit */signed char) ((short) ((unsigned short) var_4)));
                            var_21 -= ((long long int) ((signed char) var_1));
                            var_22 = ((/* implicit */signed char) ((unsigned char) ((_Bool) arr_9 [i_0] [i_1] [i_2] [i_5] [i_5])));
                            arr_23 [i_5] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) arr_0 [i_0])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) ((int) ((unsigned char) 274877906943ULL))));
                            var_23 = ((/* implicit */int) ((unsigned char) ((short) ((signed char) 7978083185540387914LL))));
                            var_24 = ((_Bool) ((unsigned short) ((long long int) var_10)));
                        }
                        var_25 ^= ((/* implicit */_Bool) ((unsigned short) (signed char)-89));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((int) ((unsigned char) ((_Bool) var_2))));
}
