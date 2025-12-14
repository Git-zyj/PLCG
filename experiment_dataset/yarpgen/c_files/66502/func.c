/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66502
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = (~(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (signed char)31)))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) arr_5 [i_2]))) ? (((((/* implicit */int) (signed char)101)) / (1039842986))) : (((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) min((var_3), (arr_7 [i_2] [i_1]))))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((14589570946092643245ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) > (((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)78))))));
            arr_9 [i_1] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) var_2))), (var_1)));
            var_15 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_6 [i_1])) < (((/* implicit */int) ((unsigned char) arr_8 [i_1]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_1) : (((/* implicit */int) arr_7 [i_3] [i_1]))))), (max((1156736820U), (((/* implicit */unsigned int) arr_5 [2ULL])))))))));
            arr_12 [i_1] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) (unsigned char)228))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_5 [i_3])) | (((/* implicit */int) arr_0 [6] [i_3])))), ((~(((/* implicit */int) arr_0 [i_1] [i_3])))))))));
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) > (var_8))) ? (max((min((7823276396848208620LL), (((/* implicit */long long int) 16383)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(short)5])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((unsigned int) arr_6 [i_1])))));
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)34850)) ? (var_4) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-7823276396848208621LL)))))) : (min(((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_6 [i_1]))))));
        arr_13 [i_1] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_8 [i_1]))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [12U] [i_5] [14U] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)78))))));
            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))) % (var_2)));
            arr_20 [6] [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 14589570946092643252ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) / (((/* implicit */int) ((((/* implicit */_Bool) 4294967292U)) && (((/* implicit */_Bool) 70368744177663ULL)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(unsigned char)17])) * (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) arr_18 [i_4])) : (max((3857173127616908393ULL), (((/* implicit */unsigned long long int) (signed char)-70)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (9))))));
        }
        var_21 += ((/* implicit */signed char) var_11);
        arr_21 [(unsigned char)4] = ((/* implicit */unsigned long long int) var_4);
        arr_22 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) % (((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))) : (arr_17 [(_Bool)1]))))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((((/* implicit */int) (_Bool)1)) << (((max((1745634030), (((/* implicit */int) (_Bool)1)))) - (1745634029))))) : (((/* implicit */int) var_9))));
    var_23 = ((/* implicit */signed char) 342676908814858358LL);
    var_24 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_6] [i_6])) | (((/* implicit */int) arr_24 [i_6] [i_6]))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (arr_23 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_2 [i_6] [i_6])))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    {
                        var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (7823276396848208614LL) : (((/* implicit */long long int) arr_28 [i_9]))))) ? (((/* implicit */int) arr_0 [i_6] [i_7])) : (((/* implicit */int) arr_24 [i_9] [i_6]))));
                        arr_35 [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        var_28 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_23 [12U] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))) : (arr_1 [(signed char)1])))));
        var_29 = ((/* implicit */short) (unsigned short)60175);
        arr_38 [i_10] = ((/* implicit */signed char) (((_Bool)1) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    }
}
