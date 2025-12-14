/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69350
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
    var_10 &= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-106))))) ? (min((-9223372036854775797LL), (((/* implicit */long long int) (signed char)118)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -476684931084891514LL)))))))) == (((/* implicit */long long int) ((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), (((arr_1 [(signed char)0]) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-122))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_2] [17LL] [i_3 - 1] = ((/* implicit */signed char) var_4);
                                var_12 *= ((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                                arr_13 [(unsigned char)1] [i_3] [i_2 + 1] [i_3] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-117)), (var_6)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2 - 1] [i_1] [18LL] [i_1] [i_2 - 1]))))) ? (((long long int) arr_4 [i_0] [i_2 + 1] [i_2 - 1])) : (((arr_10 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_0] [i_0]) >> (((arr_10 [i_2 + 1] [i_2] [12LL] [i_2 + 1] [1LL] [i_2] [i_1]) - (3796077810066330574LL)))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) arr_16 [i_5 - 1] [i_5 + 1]);
        arr_18 [12LL] &= ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 + 1])) || (((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 - 1]))))), (((signed char) arr_15 [i_5 - 1] [i_5 - 1]))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_13 += ((/* implicit */long long int) arr_20 [i_7] [i_5 - 1]);
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) && (((((/* implicit */_Bool) -2177670655199520941LL)) && (((/* implicit */_Bool) (unsigned char)252)))))) ? (((/* implicit */int) (((+(((/* implicit */int) (signed char)-124)))) == (((((/* implicit */int) arr_22 [i_5 + 1])) + (((/* implicit */int) (signed char)118))))))) : (((/* implicit */int) ((unsigned short) (unsigned short)54531))))))));
                    }
                } 
            } 
        } 
    }
}
