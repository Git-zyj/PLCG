/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87060
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_3);
        var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (1176345580767166102LL)))));
        var_15 -= arr_1 [i_0];
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_2 + 2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1176345580767166102LL)) ? (-6430260549277856594LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1])))))) ? (max((((/* implicit */long long int) 3240324145U)), (1125899906842623LL))) : ((+(arr_10 [(unsigned short)0] [i_2])))))) ? (arr_4 [i_1] [i_1]) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_10 [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), ((-(((((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))) ^ (arr_14 [i_1] [i_1] [i_3] [i_4])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
                            arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))));
                        }
                    }
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_2] [i_3] [i_3] [(signed char)1] = ((((((/* implicit */_Bool) 4102967764U)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1 + 3])))) : (((((/* implicit */_Bool) -3454088603938351761LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) : (arr_3 [i_1 + 2]))));
                        arr_24 [i_6] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-1176345580767166082LL))))));
                        arr_25 [i_6] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_2])) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (-574585644932669088LL)))))));
                        arr_26 [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_2 + 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) max((arr_15 [i_2] [i_2] [i_2 + 1] [(unsigned short)0] [i_3]), (arr_15 [i_2] [i_2] [i_2 + 1] [(unsigned short)0] [i_2]))))));
                    }
                    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (8388592)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [i_1] [i_1] [i_2] [(unsigned char)16] [i_3]), (((/* implicit */unsigned char) arr_15 [i_1] [i_1] [(unsigned char)11] [i_2] [i_1 + 2])))))) : (max((arr_14 [i_1 + 1] [i_1 + 1] [i_2] [i_3]), (((/* implicit */long long int) var_1)))))), (((((/* implicit */_Bool) -962616396672579705LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                }
            } 
        } 
        arr_27 [13LL] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967276U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_15 [i_1] [8LL] [i_1] [8LL] [i_1 - 1]))))) : (((((/* implicit */_Bool) var_6)) ? (arr_16 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (min((((((/* implicit */_Bool) (unsigned short)0)) ? (1429176517151659453LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7568))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)241)))))))));
        var_19 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)24))))));
        arr_28 [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)235)) - (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        var_20 ^= ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)119)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88)))))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            for (long long int i_9 = 3; i_9 < 7; i_9 += 4) 
            {
                for (unsigned char i_10 = 2; i_10 < 7; i_10 += 1) 
                {
                    {
                        var_21 += ((unsigned char) arr_7 [i_7] [i_8]);
                        arr_38 [i_7] [i_7] [i_7] = min((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_8 - 1])) == (((/* implicit */int) arr_31 [i_8 + 1]))))), (((long long int) min((((/* implicit */unsigned short) var_12)), (var_10)))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((var_12), (var_1))))));
}
