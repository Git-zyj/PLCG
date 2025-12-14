/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96466
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_0 [13]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0])))))))) ^ (max((max((1047576536), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (((((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) != (((/* implicit */int) arr_1 [i_0] [i_2])))) ? (((unsigned long long int) arr_1 [i_1 - 2] [i_2 + 3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))));
                    var_18 = ((/* implicit */unsigned short) ((min((7222368085343146791ULL), (((/* implicit */unsigned long long int) (unsigned char)80)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_8)))))))))));
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 3] [i_1 + 1]))) : (arr_5 [i_1 + 2] [i_2 + 3])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_1] [i_2 + 3]) ? (-389724151143578858LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) * (var_1))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((8388352LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54205)))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 288230376017494016LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (1961053093U)));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_4 [i_3] [i_3]) || (((/* implicit */_Bool) var_5))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -462610034)) ? (((/* implicit */int) (unsigned char)230)) : ((-2147483647 - 1))));
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 8589930496LL)) == (17592186011648ULL)));
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_4 + 2] [i_4 - 2]))));
        }
        for (short i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [(signed char)2])), (var_3))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_12)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [(_Bool)1]))))) ? (((var_13) << (((13869098792861162781ULL) - (13869098792861162770ULL))))) : (((/* implicit */unsigned long long int) arr_17 [i_5 + 2] [i_5 + 2]))))))));
        }
        for (int i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) ((short) (unsigned short)32256))) ? (((((/* implicit */_Bool) (unsigned short)65024)) ? (-288230376017494016LL) : (((/* implicit */long long int) 2147483647)))) : (arr_21 [i_3] [i_6 + 1] [i_6 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_11 [1ULL])), (var_4)))) : (((long long int) 1416696440))))));
            arr_23 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6 - 2])) * (((/* implicit */int) var_11))))), (min((arr_19 [i_3]), (arr_19 [i_6 - 3])))));
            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-64))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_3] [i_3])), (var_9)))) : (((/* implicit */int) min((((/* implicit */short) arr_8 [i_7] [i_7] [i_3])), (arr_14 [i_7])))))));
            var_28 = max((((/* implicit */long long int) max((((/* implicit */unsigned int) 460265101)), (4194304U)))), (min((-2666100005102759443LL), (((/* implicit */long long int) (_Bool)1)))));
            var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_14 [14]), (((/* implicit */short) var_5))))) ? (max((((/* implicit */unsigned int) arr_14 [(_Bool)1])), (var_15))) : (((/* implicit */unsigned int) ((var_8) ^ (((/* implicit */int) arr_14 [(signed char)6])))))));
            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_3] [i_3]), (arr_1 [i_3] [i_7])))) ? (max((2952875168U), (((/* implicit */unsigned int) arr_1 [i_3] [i_7])))) : (max((((/* implicit */unsigned int) arr_1 [i_7] [i_3])), (3080330728U)))));
            arr_27 [i_3] [i_7] [i_3] = min((((((/* implicit */int) arr_4 [i_3] [i_7])) >> (((/* implicit */int) arr_4 [11LL] [i_7])))), (((((/* implicit */int) arr_4 [i_7] [i_3])) | (var_4))));
        }
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_19 [i_3]), (arr_19 [i_3])))) ? (((arr_19 [i_3]) * (arr_19 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_3])) && (((/* implicit */_Bool) var_10))))))));
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned short) var_14)), (var_12))));
        var_32 = ((/* implicit */short) ((((unsigned long long int) (_Bool)1)) ^ (((var_1) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_17 [i_8] [i_8]))))))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) var_9)), (arr_6 [i_9 - 1]))))));
        arr_35 [(short)6] &= ((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_9 - 1])), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (64424509440LL)))));
    }
    var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (var_13)));
    var_34 = ((/* implicit */int) var_16);
}
