/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77041
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((_Bool) arr_3 [i_0] [12] [10])))))) / ((+(arr_0 [i_0])))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_17 *= ((/* implicit */signed char) min((((((arr_13 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_4] [(signed char)10]) != (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_0] [11] [17LL] [i_3] [11])))) ? (((((/* implicit */_Bool) arr_13 [7] [i_1] [i_0] [i_3] [i_1] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [6ULL] [(unsigned char)18] [i_2] [i_2] [3U] [i_1] [3U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (var_4)))))), (max((min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_3] [i_1]))), (((/* implicit */unsigned long long int) (+(var_16))))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_16))), (((/* implicit */unsigned int) ((int) 700684961U)))))) ? (min((((/* implicit */unsigned long long int) var_4)), (min((var_3), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_8 [i_0] [(short)2])))))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_21 [6LL] [6LL] [13LL] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0] [5] [i_6] [(signed char)4]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_6] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (var_14)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) | (307999552U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) 6020020871994408426ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)2] [i_5] [i_5] [12] [i_6] [15] [i_6])) ? (((/* implicit */long long int) arr_14 [(signed char)1])) : (arr_0 [i_0])))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((arr_18 [i_0] [i_5] [i_0]) - (((/* implicit */long long int) max((arr_14 [i_0]), (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) max((((/* implicit */int) max((arr_19 [i_0] [i_5] [i_5] [i_6]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (max((((/* implicit */int) var_7)), (arr_12 [i_0] [i_6] [i_6] [i_6] [i_5] [i_0] [16LL]))))))));
                }
            } 
        } 
        var_20 = min((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_19 [i_0] [0LL] [i_0] [i_0]))))), (max((((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [3LL] [i_0] [i_0] [i_0] [1U])) ? (arr_14 [i_0]) : (((/* implicit */int) arr_11 [17LL] [17LL] [19U] [i_0] [i_0]))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((2910195877U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_22 = ((/* implicit */short) var_8);
        var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_22 [i_7])))), (arr_24 [i_7] [i_7])));
        var_24 ^= ((/* implicit */unsigned long long int) var_13);
    }
    for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) ((arr_14 [i_8 + 2]) > (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (var_4)))))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((8795019280384ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) max((arr_19 [i_8 + 1] [i_8] [(short)4] [(unsigned char)3]), (((/* implicit */unsigned short) arr_6 [(_Bool)1] [(signed char)10] [(_Bool)1] [i_8])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_8])) >> (((((/* implicit */int) var_12)) - (78)))))) ? (((/* implicit */int) ((signed char) arr_22 [7LL]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_8 + 2] [i_8]))))))) : (((/* implicit */int) var_0)))))));
        var_27 ^= ((/* implicit */signed char) ((unsigned int) (_Bool)1));
    }
    var_28 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_15)), (max((((((/* implicit */_Bool) var_8)) ? (var_3) : (var_14))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_16))))))));
    var_29 = ((/* implicit */unsigned int) var_6);
}
