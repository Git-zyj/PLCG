/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7813
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [(signed char)1] = ((/* implicit */signed char) ((max((1997582495), (((/* implicit */int) ((arr_1 [i_0] [i_0]) != (((/* implicit */int) (_Bool)1))))))) | (((((/* implicit */int) (unsigned short)65535)) & ((~(((/* implicit */int) (unsigned short)29609))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_1 [i_0] [i_0]) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_7))))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (signed char)0);
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_0 [(short)2]))))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535))))))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_4] [i_4]), (arr_1 [i_4] [i_4])))) ? (((var_13) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_3]))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_15 [i_2])))) ? (((/* implicit */int) (unsigned short)20109)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (-1)))))) != (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1997582487)), (5U)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (4510313258793308996ULL)))))));
                }
            } 
        } 
        arr_16 [i_2] = ((((((/* implicit */unsigned int) ((((/* implicit */int) (short)10)) / (arr_1 [i_2] [12])))) - (((unsigned int) 4294967290U)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9652)) ? (((/* implicit */int) (unsigned short)65415)) : (((1997582489) / (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [i_5])), (arr_18 [i_5] [i_5])))), (((unsigned int) var_15))))), (arr_10 [i_5 - 2])));
        arr_20 [12] |= ((/* implicit */unsigned short) ((min((10925194876069154871ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (((/* implicit */int) (short)15496)) : (((/* implicit */int) (unsigned short)65521))))))) / (12752321208605049592ULL)));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_9 [i_5]) ? (((/* implicit */int) arr_9 [i_5])) : (arr_8 [i_5])))))) ? (((((/* implicit */int) arr_18 [i_5] [i_6])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))) : ((~(arr_13 [(_Bool)1] [(_Bool)1] [i_6])))));
            var_23 *= ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-8)));
            var_24 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) < (2177210059U))) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (short)15490))));
            arr_24 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((4199190651961960385ULL) != (274877906943ULL)));
            var_25 |= ((/* implicit */signed char) arr_4 [i_6] [i_6]);
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_1 [i_5] [i_5])) <= (((1454383066U) << (((16093772016407648638ULL) - (16093772016407648633ULL)))))));
            var_27 = ((/* implicit */unsigned char) arr_4 [i_5] [i_7]);
        }
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 8; i_8 += 2) 
    {
        var_28 ^= ((/* implicit */unsigned char) arr_23 [i_8 - 1]);
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (((!(((/* implicit */_Bool) 1413856360U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) arr_28 [i_8 - 2]))))) : ((~(2259707840U))))))));
        var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_26 [i_8])))));
    }
    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8092))) * (12372998354869178662ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12))))) - (((var_0) ? (var_8) : (1198304250))))))));
    var_32 ^= (((-(((/* implicit */int) (signed char)3)))) - ((+((+(var_9))))));
}
