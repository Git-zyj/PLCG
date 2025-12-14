/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78113
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((/* implicit */int) ((signed char) (signed char)4))) ^ (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)10])) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) var_2))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) / (((/* implicit */int) (signed char)-5)))))), (max((arr_5 [i_1 + 2]), (((/* implicit */unsigned long long int) (signed char)83))))));
        var_14 = max((((/* implicit */signed char) ((_Bool) (signed char)4))), (arr_3 [i_1 - 1] [i_1 + 2]));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((((long long int) arr_10 [i_1 - 2] [i_2] [i_1 + 2])), (((/* implicit */long long int) ((signed char) (unsigned char)96)))));
            arr_11 [i_1] = ((/* implicit */signed char) ((7477504164152731786LL) > (1309091655850267233LL)));
        }
    }
    /* LoopSeq 4 */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((arr_8 [i_3] [i_3] [i_3]) >> (((((/* implicit */int) (signed char)93)) - (80))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_3 [i_3] [i_3]))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) arr_3 [(unsigned short)3] [i_3])))) : (((/* implicit */int) var_3))));
    }
    for (signed char i_4 = 4; i_4 < 13; i_4 += 4) 
    {
        arr_17 [i_4] [i_4 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (5461517940999440945ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_10)) ? (4740974306967656631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_8 [i_4] [i_4] [i_4 + 1]) : (1601646129089454390LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)4))) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned short)8] [(unsigned short)8])) == (((/* implicit */int) (signed char)39))))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) arr_10 [i_4 - 3] [i_4] [i_4 - 1])) : (((/* implicit */int) (signed char)-5))))) >= (7477504164152731786LL)))) / (((((/* implicit */_Bool) max((arr_15 [i_4] [i_4]), (13705769766741894985ULL)))) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_5])), (((int) ((((/* implicit */_Bool) 1871397622)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)69)))))));
            arr_22 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [i_5]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_21 [i_6])))) : (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_20 = min((((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_3)))), (((int) var_9))))), (((var_2) ? (min((1601646129089454402LL), (arr_19 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))))));
            var_21 = ((/* implicit */short) min((var_21), (((short) ((((/* implicit */int) (short)-23)) / (((/* implicit */int) arr_20 [(unsigned char)14])))))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((arr_18 [(signed char)14]) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_24 [i_5]) : (arr_19 [(unsigned char)16]))) : (min((var_0), (arr_23 [12ULL]))))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-122)))))))));
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                arr_30 [i_5] [i_5] [i_8] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (unsigned char)68)))));
                arr_31 [i_5] [i_8] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (_Bool)0))))), (arr_24 [i_8])));
            }
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                arr_34 [i_5] = ((/* implicit */unsigned char) -6357267037376424148LL);
                arr_35 [i_10] |= ((/* implicit */signed char) (+(max((arr_29 [i_10] [i_10]), (((/* implicit */unsigned long long int) (signed char)-16))))));
                arr_36 [i_10] [i_8] [i_8] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5])) ? (arr_26 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_29 [i_5] [i_8])) ? (((/* implicit */int) arr_20 [i_5])) : ((-(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5]))))));
                arr_37 [(short)8] [(signed char)11] [i_10] [i_5] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 12901263762657158789ULL)) ? (((/* implicit */int) ((signed char) var_10))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-5)) : (arr_25 [i_5]))))));
            }
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) arr_21 [i_5]))))) ? ((~(((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) arr_32 [18] [(unsigned char)4])) : (((/* implicit */int) arr_20 [(_Bool)1])))))) : (((/* implicit */int) ((unsigned char) ((short) arr_27 [i_5] [i_8])))))))));
        }
        for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
        {
            var_24 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5]))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_5])), (2614066977512380286ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (arr_24 [i_5])))) ? (((int) ((((/* implicit */_Bool) arr_24 [i_11])) ? (arr_24 [i_11]) : (var_0)))) : (((/* implicit */int) (signed char)11))));
        }
        var_26 = ((/* implicit */long long int) ((short) ((unsigned char) arr_32 [i_5] [i_5])));
    }
    for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        arr_42 [i_12] [i_12] = ((((/* implicit */_Bool) -1210637101)) ? (-1601646129089454390LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (short)-1031)))));
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_48 [i_14] [i_14] [i_14] [i_13] = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (signed char)60)))));
                arr_49 [i_12] [i_12] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_40 [(signed char)13]), (arr_40 [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (max((var_8), (-1601646129089454379LL))))) % (max((1601646129089454390LL), (((/* implicit */long long int) (signed char)-95))))));
                arr_50 [i_14] = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (arr_47 [i_12] [i_12])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-25))))));
                arr_51 [i_14] = ((/* implicit */int) ((long long int) ((unsigned char) arr_43 [i_12] [(_Bool)1] [i_12])));
            }
            for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                arr_54 [i_12] [i_15] [i_13] [i_15] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_53 [i_12])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (max((arr_53 [i_12]), (arr_53 [i_12])))));
                var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12] [i_12])) ? (((/* implicit */int) (short)-16438)) : (((/* implicit */int) arr_46 [i_12] [i_12] [20]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) arr_44 [i_12] [i_15])) / (((/* implicit */int) arr_44 [i_12] [i_13]))))));
                var_29 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_46 [i_12] [i_15] [i_15])), (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (_Bool)0))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) 0))));
                var_31 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((unsigned short)12329), (((/* implicit */unsigned short) arr_46 [i_12] [i_12] [i_12]))))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)153)) || (((/* implicit */_Bool) (unsigned char)102))))))));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (36028797018963967ULL)));
                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_56 [i_16] [i_16] [i_16]))) ? (((((/* implicit */_Bool) arr_46 [i_12] [i_16] [i_16])) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_40 [i_16])))) : (((/* implicit */int) arr_41 [i_16]))))) ? (((/* implicit */long long int) 1371344499)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)66))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_55 [i_16] [i_16] [i_16] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1601646129089454391LL))))));
            }
        }
    }
}
