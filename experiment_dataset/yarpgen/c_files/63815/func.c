/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63815
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) var_1))))))) ? (5564982783745568455LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            arr_15 [5U] [5U] [i_2] [i_2] [5U] [i_2] [5U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3192947693U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6199122552346376699LL)) ? (7767759157628211236LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))))));
                            var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((-7767759157628211237LL), (((/* implicit */long long int) (short)-10126)))), (((((/* implicit */_Bool) -7767759157628211236LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (max((((/* implicit */long long int) (short)-10126)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
                            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */long long int) arr_3 [i_0])) : (var_5)));
                            var_12 ^= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_1]))) : (min((var_6), (((/* implicit */long long int) (_Bool)0)))))), (((/* implicit */long long int) 16515072U))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -7767759157628211244LL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (short)-29671)))) : ((-(((/* implicit */int) (short)-29674))))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) : (var_7)))))))));
                            arr_20 [i_0] [i_0] [i_2] [i_2] [i_5] [i_2] [i_5] = var_2;
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((var_3) ? (((/* implicit */int) (short)-10126)) : (((/* implicit */int) (signed char)-18)))))))));
                            var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_12 [i_1] [(signed char)3] [i_3])) ? (arr_18 [i_0] [i_0] [i_2] [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [(unsigned char)4] [i_3])))))));
                        }
                        arr_21 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)3629);
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */long long int) var_4);
        arr_27 [i_6] = ((/* implicit */unsigned long long int) var_0);
        var_17 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)9)), (((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((15960238295237642813ULL), (((/* implicit */unsigned long long int) (short)5913))))) ? ((+(arr_18 [i_6] [i_6] [i_6] [2LL] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)7801))))))))));
    }
    var_19 = ((/* implicit */_Bool) var_9);
}
