/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99640
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (var_6));
        var_11 ^= ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [(unsigned char)8] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_8) : (var_7))) : (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))) ? (((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) (!(((_Bool) arr_5 [i_0 - 1] [i_1]))))))))));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (arr_2 [1ULL] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */_Bool) arr_2 [10U] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_0] [i_0])))));
            var_14 ^= ((/* implicit */signed char) (_Bool)1);
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)20), (((/* implicit */signed char) (_Bool)1)))))))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_16 = arr_6 [i_3] [i_2];
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) (unsigned char)122))))) : (((((/* implicit */_Bool) arr_5 [i_1] [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_11 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0]))))) : ((((_Bool)1) ? (16138301272922512303ULL) : (var_7)))))));
                        arr_12 [i_0] [i_3] = arr_10 [i_0] [i_0] [i_0];
                        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_2] [i_1]))))) || (((_Bool) (_Bool)1))))));
                    }
                } 
            } 
        }
        arr_13 [i_0] = ((((/* implicit */int) var_0)) == (((((/* implicit */_Bool) ((arr_4 [(signed char)3] [(_Bool)1] [i_0]) ? (2308442800787039313ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)16)))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_8);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_5 [(signed char)5] [9ULL]))));
                                arr_23 [i_0] [i_4 - 1] [i_0] = ((/* implicit */_Bool) (unsigned char)110);
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3263657595U)) ? (3263657605U) : (1031309706U)));
                }
            } 
        } 
    }
    var_21 *= ((/* implicit */_Bool) var_8);
}
