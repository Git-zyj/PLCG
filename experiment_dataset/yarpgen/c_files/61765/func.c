/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61765
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
    var_19 = ((/* implicit */unsigned long long int) var_17);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (var_1)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_14))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((var_21), (-1473347160464605106LL)));
        var_22 = ((/* implicit */short) var_14);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_23 = ((((/* implicit */_Bool) ((unsigned char) (short)28489))) ? (((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) var_6))))) : (((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1 + 3])))));
            var_24 |= ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) -5361809155126487056LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) : (-9223372036854775800LL))));
        }
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_17 [i_5] [i_2] [i_2] [i_0] = min((min((9043504258574260932LL), (((/* implicit */long long int) arr_11 [i_0 - 1] [i_2 + 1])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_11 [12ULL] [(signed char)2])), ((unsigned short)26003)))));
                            var_25 += ((/* implicit */short) ((3174048111157310599ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                            var_26 = ((/* implicit */signed char) arr_0 [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1])) ? (arr_6 [i_7] [i_0 - 1]) : (arr_6 [10] [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_21 [i_7] [i_6 + 3] [i_2 + 4] [i_2 + 4]))))) : (-9223372036854775803LL))))));
                        arr_23 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_12)), (7078058651636371438LL))), (min((((/* implicit */long long int) (unsigned short)511)), (9223372036854775795LL)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) * (arr_14 [i_0] [i_2 + 1] [i_2] [i_6] [i_2 + 1])))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1))))) != (((672988396U) >> (((/* implicit */int) arr_2 [i_7]))))))))))));
                        arr_24 [i_2] [(_Bool)1] [15] [i_2] = ((/* implicit */int) arr_4 [i_2] [(short)18] [i_2]);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2 + 3] [i_0 + 1]))))) ? (arr_22 [i_0] [i_2 + 2] [22LL] [0LL] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(unsigned short)18] [i_2] [i_6] [i_6])) & (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((-364671270) | (((/* implicit */int) (unsigned short)53620))))) : (min((((/* implicit */unsigned int) (short)12331)), (var_14))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 3; i_8 < 21; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
                {
                    {
                        arr_29 [(signed char)9] [i_2 - 1] [(signed char)9] [i_2] = ((/* implicit */unsigned int) (short)-4368);
                        var_30 = ((var_12) ? (((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) arr_15 [i_9 - 1] [(_Bool)1] [i_8 - 1] [i_2] [i_2] [i_0 + 1])) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)23845)), (-2056566297045140128LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)37)) != (((/* implicit */int) min((((/* implicit */short) (signed char)57)), ((short)-20369)))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 1) /* same iter space */
        {
            arr_33 [i_0] [i_10] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - ((-(-7078058651636371441LL))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_31 = ((/* implicit */unsigned int) (_Bool)1);
                var_32 = ((((((/* implicit */_Bool) -6297575654281695892LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (-8818309635895566990LL))) & (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_0 + 1] [i_10 + 2] [i_10 + 2])))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)69)) % (759747538)));
            }
            var_34 += ((/* implicit */unsigned int) ((((_Bool) arr_25 [i_0 - 1])) ? (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_0] [i_10] [i_10 + 4]) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)19294))))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_32 [i_0])) ? (-8818309635895566998LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31)))))))));
        }
    }
    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)60)), (((int) ((((/* implicit */_Bool) 5429024212986268375ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (-2056566297045140150LL)))))))));
        var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (((unsigned int) arr_6 [i_12 - 1] [i_12 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)20582)))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)40916)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13017719860723283225ULL)))));
        arr_40 [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
    }
    for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_14] [i_14] [i_14])) ? (((/* implicit */int) min((var_18), (((/* implicit */short) arr_15 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))) : (((/* implicit */int) max(((unsigned char)1), (((/* implicit */unsigned char) arr_16 [i_14] [i_14] [i_14] [i_14])))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_32 [i_14]))) ? (max((arr_30 [i_14] [(unsigned char)1]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_32 [i_14])))))))));
        arr_44 [i_14] [i_14] = ((/* implicit */signed char) ((_Bool) max((((((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (17493208957932004806ULL))), (((/* implicit */unsigned long long int) var_0)))));
        var_39 = ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (arr_39 [i_14] [i_14])))) ? (((arr_2 [i_14]) ? (((/* implicit */long long int) var_14)) : (arr_5 [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
}
