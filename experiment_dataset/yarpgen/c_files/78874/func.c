/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78874
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) ((arr_6 [i_1 + 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) > (((/* implicit */int) (_Bool)1)))))));
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_6)) == (8283339161432209541ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_0]))))) : (((var_0) << (((((/* implicit */int) arr_2 [i_1])) - (24207)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((long long int) arr_8 [i_0] [i_0] [i_0] [i_0]));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)0)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_16 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (8163128922671274527ULL)));
            var_17 = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_4 - 1] [i_3]);
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4]))))) ? (16778036981908012972ULL) : (((/* implicit */unsigned long long int) arr_10 [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                var_19 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) -6)))));
                var_20 = ((/* implicit */unsigned long long int) 8847089980188605729LL);
                var_21 -= (+(((/* implicit */int) (unsigned short)19493)));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2434370970672556346LL)) / (arr_12 [i_4 - 1] [i_4 - 1])));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) arr_1 [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)28155)) == (((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_7]))))) : (((/* implicit */int) var_2))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_30 [i_3] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) 1668707091801538643ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3])))))) : (arr_28 [i_8] [i_7] [i_3])));
                        arr_31 [i_3] [i_8] [i_3] = (-(((/* implicit */int) arr_13 [i_4 - 1])));
                    }
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) 18446744073709551615ULL))));
                        arr_36 [i_3] [i_3] [i_6] [i_7] [i_9] = arr_10 [i_3] [i_3] [i_3] [i_3];
                    }
                    for (signed char i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        arr_39 [i_3] [i_3] [(_Bool)1] = ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) arr_16 [i_3])) : (((/* implicit */int) arr_16 [i_3])));
                        arr_40 [i_3] [i_3] [i_6 - 1] = ((/* implicit */_Bool) (+(var_4)));
                    }
                }
                var_24 = ((/* implicit */unsigned char) ((long long int) ((unsigned char) arr_18 [i_3] [(signed char)8] [i_3] [i_3])));
            }
            for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 4) 
            {
                arr_44 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */int) var_3)) << (((var_9) - (8425568653479681561LL))))) / (arr_10 [10LL] [i_11 - 1] [i_4 - 1] [i_4])));
                var_25 += ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11])) ? (arr_37 [i_11] [i_11] [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11] [i_11]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 9; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_49 [i_13] [i_3] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) arr_9 [i_3]);
                            var_26 *= ((/* implicit */int) arr_0 [i_3] [i_3]);
                            var_27 = ((/* implicit */unsigned long long int) ((_Bool) arr_22 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]));
                            var_28 = ((/* implicit */int) 3ULL);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            var_29 = ((/* implicit */_Bool) (unsigned short)16384);
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_3] [i_14])) + (((/* implicit */int) arr_42 [i_14] [i_3]))))) ? (min((((/* implicit */int) arr_15 [i_3])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [i_14] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_14])))))) : (min((((/* implicit */int) arr_35 [i_14])), (((int) (_Bool)1))))));
        }
    }
    for (long long int i_15 = 2; i_15 < 7; i_15 += 3) 
    {
        arr_54 [i_15] = ((/* implicit */int) ((unsigned int) (~(min((-1286401282), (((/* implicit */int) arr_14 [i_15] [i_15] [i_15])))))));
        var_31 = ((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_15 + 1] [i_15 + 2] [i_15 + 2])), ((~(((/* implicit */int) arr_5 [i_15 + 1] [i_15 - 1] [i_15 - 2]))))));
    }
    for (short i_16 = 4; i_16 < 13; i_16 += 2) 
    {
        var_32 = ((/* implicit */short) ((var_11) ? (((((/* implicit */_Bool) arr_9 [i_16])) ? (((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_16]))))) : (((long long int) arr_55 [i_16])))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_33 = ((/* implicit */_Bool) arr_0 [i_16 - 4] [i_16]);
        var_34 = ((/* implicit */unsigned short) ((18124020193740003186ULL) ^ (8163128922671274527ULL)));
    }
    /* LoopSeq 2 */
    for (signed char i_17 = 3; i_17 < 17; i_17 += 2) 
    {
        arr_61 [i_17] [i_17] = ((/* implicit */unsigned int) ((short) max((arr_5 [i_17] [i_17] [i_17 - 2]), (arr_5 [i_17] [i_17 - 3] [i_17 - 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            var_35 -= ((/* implicit */long long int) var_2);
            arr_65 [i_17] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_60 [i_18])))));
            var_36 *= ((/* implicit */long long int) (_Bool)0);
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((unsigned short) arr_63 [i_18 + 1] [i_18 + 1])))));
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_19] [0ULL] [i_19])))))) || (((/* implicit */_Bool) arr_66 [i_19])))))));
                arr_68 [i_17] [(unsigned char)6] [i_17] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) var_2)));
            }
        }
        var_39 = ((/* implicit */unsigned char) arr_64 [5] [i_17]);
    }
    for (unsigned char i_20 = 1; i_20 < 11; i_20 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 1) /* same iter space */
        {
            arr_74 [14] [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_21] [i_21] [(unsigned short)16] [i_20 + 4])) & ((~(arr_72 [i_21] [i_21] [i_21])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_20 + 4] [i_21] [i_21]))))) : (((/* implicit */int) (_Bool)1))));
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_66 [14ULL]) > (((/* implicit */unsigned long long int) ((int) (short)3995)))))) != (((((/* implicit */int) ((_Bool) var_0))) << (((/* implicit */int) min((arr_55 [i_21]), (arr_57 [i_20]))))))));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_66 [(_Bool)1]))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 1) /* same iter space */
        {
            var_42 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28685)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21598))) : (4251658328700410621ULL)))) ? ((+(((/* implicit */int) arr_9 [0ULL])))) : (((arr_7 [14LL] [i_22] [i_22]) ? (((/* implicit */int) arr_8 [i_20] [i_20] [i_20] [i_22])) : (var_4)))))), (((((/* implicit */_Bool) arr_59 [i_20 - 1])) ? (arr_69 [i_20 - 1]) : (arr_69 [i_20 - 1]))));
            var_43 = ((long long int) (-(((/* implicit */int) arr_1 [i_20]))));
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 2) 
                {
                    {
                        var_44 = ((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_23])), (max((((/* implicit */int) (unsigned char)91)), (-886051087)))));
                        var_45 = ((/* implicit */int) arr_9 [i_23]);
                    }
                } 
            } 
            arr_86 [i_20 + 1] [i_22] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 2576385392U)) ? (arr_66 [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [14U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) && ((_Bool)1))))))));
        }
        arr_87 [i_20] [i_20] = ((/* implicit */_Bool) (~(min((7423226753113979672LL), (4309296718367136325LL)))));
    }
}
