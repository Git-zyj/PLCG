/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95952
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
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+((+(133955584))))))));
        var_18 = ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)91)));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_5);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_2 - 1])) ? (arr_5 [i_2] [i_2 + 1] [i_2 - 1]) : (arr_5 [(signed char)15] [i_2 + 1] [i_2 - 1])))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 1])))) ^ (max((arr_5 [i_2 - 1] [i_2 + 1] [13U]), (arr_5 [i_2 + 1] [i_2 + 2] [i_1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_21 [(_Bool)0] [i_5] [8LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_10 [i_5] [(_Bool)1] [i_6 - 1] [i_6 - 1]))))));
                    arr_22 [i_6 - 1] [i_5] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) | (var_10))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) (unsigned char)226))))));
                }
            } 
        } 
        arr_23 [i_1] = ((/* implicit */long long int) ((((arr_14 [i_1] [i_1]) < (((/* implicit */unsigned long long int) var_2)))) ? (((arr_14 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) arr_10 [(signed char)10] [4LL] [(signed char)10] [(short)6])))) : (((/* implicit */unsigned long long int) (-(var_9))))));
    }
    for (long long int i_7 = 1; i_7 < 21; i_7 += 1) 
    {
        var_23 += ((/* implicit */long long int) arr_25 [8LL] [i_7]);
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (long long int i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_26 [i_9 - 3] [i_7 - 1])))));
                        arr_33 [i_7] [i_8] [i_9] [(signed char)8] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)68)))) ? (((((/* implicit */_Bool) min((-2095294511), (((/* implicit */int) arr_28 [i_7] [20] [(unsigned char)9]))))) ? (arr_26 [i_9 - 3] [i_7 + 1]) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))));
                        arr_34 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_28 [i_9 + 1] [i_7 + 1] [12])) / (((/* implicit */int) arr_28 [i_9 + 1] [i_7 + 1] [10U])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 4; i_11 < 13; i_11 += 4) 
    {
        var_25 = ((/* implicit */signed char) arr_6 [i_11 - 3] [i_11 - 3]);
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_16)) : (arr_30 [i_11 - 3] [18] [20U] [i_11]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (arr_5 [i_11] [i_11 - 3] [i_11 - 3]))))))))));
    }
    /* LoopSeq 4 */
    for (signed char i_12 = 1; i_12 < 20; i_12 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                {
                    arr_44 [i_14] [i_14] [i_12] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) 11330832818964107397ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) : ((~(1499514557U))))) <= (((((/* implicit */_Bool) arr_32 [i_12 - 1] [i_13] [i_12 + 1] [(signed char)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [5ULL] [5ULL] [i_12 + 1] [17U]))) : (arr_27 [14LL])))));
                    var_27 ^= ((/* implicit */signed char) ((((arr_30 [i_12 + 1] [i_12 - 1] [4] [i_14]) >= (((/* implicit */long long int) var_14)))) ? ((~(602937803U))) : (((unsigned int) arr_32 [i_12 + 1] [i_12 - 1] [i_12] [1U]))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((((/* implicit */int) arr_37 [i_12 - 1])) | (((/* implicit */int) arr_37 [i_12 + 1]))))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_27 [i_12 + 1]))) == (((((/* implicit */unsigned long long int) arr_24 [i_12 - 1])) * (arr_26 [i_12 - 1] [i_12 + 1]))))))));
        arr_45 [i_12 + 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_30 [i_12 + 1] [(signed char)0] [i_12] [i_12])) ? (arr_30 [i_12 + 1] [i_12] [i_12 + 1] [0]) : (arr_30 [i_12 + 1] [i_12 - 1] [i_12] [i_12]))), (((((/* implicit */_Bool) 602937803U)) ? (4502395363197761537LL) : (((/* implicit */long long int) 1U))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)226), (((/* implicit */unsigned char) (_Bool)1)))))) != ((+(var_9)))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    arr_52 [i_12] [(short)4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_6)) == ((+(arr_48 [11ULL] [(signed char)4] [(unsigned char)4])))))), (((((/* implicit */_Bool) arr_25 [i_12 - 1] [i_15])) ? (arr_29 [i_15] [i_12]) : (((arr_49 [18] [14ULL] [i_12 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                    var_31 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_12 - 1] [i_12 - 1])) ? (arr_42 [i_12 + 1] [i_12 + 1]) : (arr_42 [i_12 - 1] [i_12 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        arr_55 [13] [13] [(short)7] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1187277525U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) : (3637445664148150140LL)));
                        arr_56 [(signed char)19] [20U] [3U] [(signed char)14] |= ((/* implicit */short) (((+(144115187538984960ULL))) >> (((var_8) + (324096451)))));
                    }
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) min((min((arr_51 [i_12 + 1] [i_12 - 1] [12LL] [(_Bool)1]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))))), (((var_9) | (var_12))))))));
                }
            } 
        } 
    }
    for (signed char i_18 = 1; i_18 < 20; i_18 += 4) /* same iter space */
    {
        arr_61 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_41 [i_18 - 1]))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_18] [i_18] [8LL]))))) % (((((/* implicit */_Bool) var_16)) ? (arr_60 [8U]) : (((/* implicit */long long int) var_14)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 21; i_19 += 4) 
        {
            var_33 |= ((/* implicit */signed char) var_16);
            arr_64 [i_18] [(unsigned char)20] &= ((/* implicit */long long int) 0U);
            var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [3ULL]))));
        }
        for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_21 = 3; i_21 < 18; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    {
                        var_35 = ((/* implicit */signed char) var_13);
                        arr_73 [17U] [2] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3950203120441824545LL)));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned int) (!(((arr_48 [i_20] [i_20] [i_18]) < (((unsigned int) (signed char)76))))));
        }
    }
    for (short i_23 = 1; i_23 < 9; i_23 += 1) 
    {
        arr_76 [i_23] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_23 + 4] [i_23] [i_23 + 3] [i_23 + 3])))))) / (((((/* implicit */_Bool) 2230805737U)) ? (arr_30 [i_23 + 3] [0LL] [i_23 - 1] [i_23 + 2]) : (arr_30 [i_23 - 1] [i_23 + 4] [i_23 + 2] [i_23 - 1])))));
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (signed char)-50)), (8694587159125865964ULL)))))));
        arr_77 [(short)7] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_23 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_23] [10U] [i_23 + 2] [16ULL]) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [(_Bool)0] [i_23])))) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
    }
    for (short i_24 = 1; i_24 < 17; i_24 += 4) 
    {
        var_38 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_24 - 1]))));
        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((arr_47 [i_24]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_69 [i_24] [16LL] [8])) >= (arr_40 [(_Bool)1] [i_24]))))))))));
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (+(3692029493U))))));
    }
}
