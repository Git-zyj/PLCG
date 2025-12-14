/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55881
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_12 += ((/* implicit */signed char) (((+(((((/* implicit */_Bool) arr_2 [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [12U] [i_0]))) : (arr_2 [i_0]))))) == (((/* implicit */long long int) arr_5 [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_1 [i_0]))));
                        var_14 = ((/* implicit */short) (+(((arr_9 [i_3]) << (((arr_9 [i_1]) - (953512088)))))));
                        var_15 = ((((/* implicit */_Bool) arr_8 [i_0] [(short)11] [3LL] [(unsigned short)3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [(signed char)8]) : (((/* implicit */int) arr_7 [(_Bool)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)8] [3U] [3U]))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)2] [(unsigned short)2]))));
                    }
                } 
            } 
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((var_1), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] [(_Bool)0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [10LL] [i_4] [i_4])) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_8 [10LL] [(unsigned short)5] [i_4] [i_4]) : (((/* implicit */unsigned int) arr_13 [i_4])))))) << (((((((/* implicit */int) arr_1 [i_4])) % (((/* implicit */int) arr_6 [i_4] [i_4] [(signed char)2])))) + (59)))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (-7885570977114432585LL) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (-5059065656154027442LL) : (((/* implicit */long long int) 0))))));
        var_18 = max((((((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])) >= (((arr_7 [3ULL]) ? (((/* implicit */int) var_4)) : (arr_13 [i_4]))))), (((arr_12 [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
        var_19 = ((/* implicit */unsigned long long int) ((min((7040325375344517139LL), (-9172377634735804388LL))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4] [i_4] [13])) + (((/* implicit */int) var_3)))))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_4)))) || (((/* implicit */_Bool) ((arr_22 [i_7] [i_8]) ? (((/* implicit */int) arr_16 [(short)4] [(unsigned char)5])) : (((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) max((arr_21 [i_6] [2]), (((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_7] [i_5])) ? (arr_18 [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_6] [i_7] [i_5]))))))))));
                        arr_23 [i_5] [i_5] [i_5] [i_5] [(unsigned short)2] [16LL] = arr_17 [(unsigned char)17];
                    }
                } 
            } 
        } 
        arr_24 [i_5] = ((/* implicit */long long int) var_10);
        var_21 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_17 [i_5]), (arr_15 [i_5] [i_5])))) ? (((long long int) (short)975)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5])))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)9352)))))));
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_10))));
}
