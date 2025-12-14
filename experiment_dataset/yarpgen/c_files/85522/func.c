/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85522
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)0)), (16915002393785324065ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21975)) + (((/* implicit */int) (unsigned char)34)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_11))))) || (((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            var_21 &= ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_0))))), (max((((/* implicit */int) (_Bool)1)), (518267890)))))) ^ (3622218289224601810LL)));
            var_22 = ((/* implicit */_Bool) min((var_22), (arr_4 [i_1 + 1] [i_0])));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_3 [i_3]))) >= (((/* implicit */int) arr_9 [i_4] [i_2] [i_2] [i_0] [i_0]))));
                        arr_11 [i_0] [i_2] [(signed char)17] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((unsigned char)239), (((/* implicit */unsigned char) arr_9 [i_4] [i_2] [i_3] [i_2] [i_0]))))), (min((var_10), (((/* implicit */long long int) arr_9 [i_4] [i_2] [i_2] [i_2] [i_0]))))));
                        arr_12 [i_0] &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (-684779140728291001LL) : (((/* implicit */long long int) 0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_4]))) : (((arr_7 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (min((arr_7 [i_4] [i_4]), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (arr_2 [i_2])))))));
                        var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-27922)) ? (arr_8 [i_0] [i_2] [i_3] [i_4]) : (((/* implicit */int) arr_4 [i_0] [i_3])))), (((/* implicit */int) ((unsigned short) var_15)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-601)))))) ? (min((arr_7 [i_4] [i_4]), (((/* implicit */long long int) 172460479)))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) max((arr_9 [i_2] [i_3] [i_3] [i_4] [i_3]), (arr_0 [i_0]))))))))));
                    }
                } 
            } 
            arr_13 [i_2] = ((/* implicit */unsigned char) ((min((arr_4 [i_0] [i_2]), (arr_4 [i_2] [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)43560))))) % (max((614889055971357267ULL), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_0] [(unsigned char)2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_5])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (-3622218289224601810LL))), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) max((arr_5 [i_5]), (((/* implicit */long long int) arr_9 [i_0] [i_5] [i_0] [i_0] [(_Bool)1])))))), (max((((((/* implicit */_Bool) arr_1 [i_5])) ? (var_1) : (((/* implicit */unsigned long long int) 0LL)))), (((0ULL) + (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_5])))))))))));
        }
        var_26 = ((/* implicit */int) 7214646768714799272ULL);
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((17557161123144989618ULL), (((/* implicit */unsigned long long int) var_17))))) ? (min((3650526926054227789ULL), (((/* implicit */unsigned long long int) (unsigned short)21975)))) : (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2356639357U)), (arr_19 [i_6]))))));
        var_27 = ((/* implicit */int) max((max((((/* implicit */long long int) max((((/* implicit */short) (signed char)66)), (var_0)))), (max((((/* implicit */long long int) 2356639357U)), (0LL))))), (((/* implicit */long long int) (unsigned short)65535))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) 4534302658992883518ULL);
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
    {
        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_24 [i_7]), ((signed char)95)))), (min((var_16), (((/* implicit */unsigned int) arr_25 [i_7]))))))) ? (((/* implicit */unsigned long long int) min((min((arr_23 [22]), (arr_19 [i_7]))), (((/* implicit */long long int) ((0) ^ (((/* implicit */int) arr_25 [i_7])))))))) : (max((arr_26 [i_7]), (((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) var_4)))))))));
        arr_27 [i_7] = ((/* implicit */short) max((min((arr_26 [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7])))), (((/* implicit */unsigned long long int) arr_25 [i_7]))));
        var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (min((arr_19 [i_7]), (((/* implicit */long long int) arr_24 [i_7])))) : (((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-2634338627343563314LL))))), (min((((/* implicit */long long int) arr_25 [i_7])), (max((((/* implicit */long long int) var_19)), (arr_23 [i_7])))))));
        var_30 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4113204966U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [i_7]))) : (arr_19 [i_7])))), (min((arr_26 [i_7]), (((/* implicit */unsigned long long int) var_7))))));
    }
    var_31 = ((/* implicit */_Bool) ((unsigned int) var_11));
}
