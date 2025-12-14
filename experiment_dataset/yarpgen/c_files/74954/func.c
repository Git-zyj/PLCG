/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74954
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */unsigned int) max((((/* implicit */long long int) var_6)), (3883666727411324666LL)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) -3883666727411324666LL)), (arr_4 [11U] [i_0 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (-3883666727411324676LL))))))) ? (min((-3883666727411324686LL), (-6547188884055275418LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)89))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0])) << (((((/* implicit */int) (short)19454)) - (19437)))))) : (((3072U) | (946402839U))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [i_2] [i_1] [i_2 + 2])))) : (3102U)));
                    arr_9 [2ULL] [i_2] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2])) < (((/* implicit */int) var_4))));
                    var_12 = (unsigned char)131;
                }
                for (short i_3 = 3; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551612ULL)))))) ? (arr_10 [i_0 + 1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) min(((-(var_6))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-19454))))))))));
                    var_13 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned int) var_9))));
                    var_14 = ((/* implicit */signed char) max((((unsigned long long int) ((arr_1 [i_1] [1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((((/* implicit */_Bool) -3883666727411324688LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)99)))))))));
                    arr_14 [i_0] [i_3] [i_3] = ((/* implicit */int) ((unsigned short) var_3));
                }
                /* vectorizable */
                for (short i_4 = 3; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_15 = ((((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 1] [i_0 - 1])) * (((/* implicit */int) arr_16 [i_4 + 1] [i_1] [i_0 - 1])));
                    var_16 ^= ((/* implicit */long long int) arr_8 [(_Bool)1]);
                }
                for (short i_5 = 3; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_10 [0U] [i_1] [i_1] [i_5]) : (-1542800143764882354LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)63)))) : (((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [(_Bool)1] [i_5 + 1] [i_0 + 2])));
                    arr_20 [3ULL] [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)55)) || (((/* implicit */_Bool) min((16069985159959089078ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)0])))))))), (var_8)));
                }
                var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (short)120)) : (((/* implicit */int) (signed char)89))))));
                var_19 = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((int) (short)-132))))) && (((/* implicit */_Bool) var_6))));
}
