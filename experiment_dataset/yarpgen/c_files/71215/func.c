/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71215
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) (~(var_0)));
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) (+(((int) arr_1 [i_0]))))) ? (max((((/* implicit */long long int) (((_Bool)1) ? (-411883459) : (1856292850)))), (((((/* implicit */long long int) var_1)) | (arr_0 [i_0 + 1]))))) : ((((+(arr_0 [i_0]))) ^ (arr_0 [i_0 - 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                        arr_10 [i_0] [10LL] [i_2] [i_3] [i_3 + 3] [i_2 - 2] = (-((+(max((arr_1 [i_0 - 1]), (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) var_10);
    }
    for (int i_4 = 2; i_4 < 24; i_4 += 3) 
    {
        arr_14 [i_4] [i_4] = (~(((((/* implicit */_Bool) (signed char)-1)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))));
        var_19 = ((var_0) % (((/* implicit */int) ((((/* implicit */_Bool) -1764787273)) || (((/* implicit */_Bool) (signed char)26))))));
        var_20 ^= ((/* implicit */int) (signed char)-22);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_15 [i_4 - 2] [7LL] [i_4 - 2])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (int i_8 = 2; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((arr_18 [(_Bool)1] [i_5] [i_8]) / (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) var_4)))) + ((-(((/* implicit */int) var_10)))))))));
                                var_23 = (-(((/* implicit */int) var_10)));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */int) ((((/* implicit */int) var_10)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_5] [i_4])) : (var_14)))) ? (((var_14) % (((/* implicit */int) var_7)))) : (((/* implicit */int) ((arr_21 [i_4] [6] [i_6] [14] [i_4 - 2] [13]) < (-411883459))))))));
                }
            } 
        } 
        arr_23 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -411883459)) ? (2147483647) : (-1)));
    }
    var_25 = ((/* implicit */int) var_4);
}
