/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92986
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2422)) ? (var_8) : (1104875519U)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (short)2434);
                    var_16 = var_5;
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_17 -= var_4;
                            var_18 = ((/* implicit */unsigned long long int) (unsigned char)97);
                            arr_16 [i_0] [i_0] [13] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) -1359220673)) & (var_1)));
                        }
                        var_19 = ((/* implicit */_Bool) var_1);
                        arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)58))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_7] [i_8] [i_7] [i_9] = ((/* implicit */int) (_Bool)0);
                        arr_26 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((unsigned long long int) (_Bool)1))));
                        arr_27 [i_7] [i_7] = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_7] [i_8] [i_9]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)148))));
                        var_20 &= ((/* implicit */unsigned short) 1359220672);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    arr_33 [i_11] [i_11] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) | (15575727533659207658ULL)));
                    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (4829080464738499135LL) : (((/* implicit */long long int) -170468783)))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        var_22 *= ((/* implicit */unsigned char) ((((_Bool) ((unsigned short) var_10))) ? (((var_4) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (-4829080464738499135LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_37 [i_12] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) <= (((((((/* implicit */_Bool) 170468783)) || (((/* implicit */_Bool) 3175483369U)))) ? (((((/* implicit */_Bool) arr_36 [(short)8])) ? (((/* implicit */int) (unsigned char)120)) : (-7878818))) : (var_7)))));
        var_23 &= ((/* implicit */unsigned char) (~(-170468783)));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        {
                            arr_51 [(short)19] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [(signed char)12] [i_16 - 1])) | (arr_46 [i_16 - 1] [i_16 - 1] [i_16 - 1])));
                            arr_52 [i_13] [(unsigned short)15] [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (unsigned char i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_59 [(short)17] [i_14] [i_14] [i_14] [i_14]))));
                            var_25 = (unsigned char)105;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    {
                        arr_69 [i_22] [i_22] [i_22] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)121))))) ? ((~(6074800362580997403ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 4194303LL))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) 
            {
                for (unsigned short i_24 = 0; i_24 < 22; i_24 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_25 = 1; i_25 < 21; i_25 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned short)65521))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -170468797)) ? (var_1) : (((/* implicit */long long int) 536870904U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_9))))) : (var_8)));
                        }
                        for (unsigned char i_26 = 0; i_26 < 22; i_26 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) ((arr_72 [5LL] [i_24] [i_23] [i_14]) && (((/* implicit */_Bool) var_3))))))))));
                            var_30 += ((/* implicit */signed char) ((unsigned int) ((unsigned char) 10905488152380307960ULL)));
                            arr_81 [i_24] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [(short)18] [i_24] [8U] [8U])) ? (((/* implicit */int) ((unsigned short) -4829080464738499135LL))) : (((/* implicit */int) (unsigned char)128))));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) var_4))))))));
                            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_41 [i_27]))));
                            var_33 |= ((/* implicit */unsigned char) ((unsigned short) var_8));
                            var_34 = ((/* implicit */signed char) (unsigned short)59748);
                            arr_86 [i_13] [i_14] [i_14] [i_24] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2936098842037341914LL)));
                        }
                        arr_87 [i_13] [i_14] [(unsigned char)7] [i_24] |= ((/* implicit */unsigned char) 4194303LL);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [(unsigned char)17])) ? (4194303LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        /* LoopSeq 1 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            arr_90 [i_23] = ((/* implicit */int) var_0);
                            arr_91 [i_13] = (unsigned char)98;
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (_Bool)1))));
        }
        for (signed char i_29 = 0; i_29 < 22; i_29 += 2) 
        {
            var_37 &= ((-4829080464738499129LL) == (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_13] [i_13] [i_13] [i_29] [i_29] [i_29]))));
            var_38 &= ((/* implicit */signed char) ((unsigned char) -8101880928626307378LL));
            var_39 |= ((/* implicit */signed char) var_11);
            arr_94 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (short)1024)) * (((((/* implicit */int) var_9)) * (1359220673)))));
        }
        var_40 *= ((/* implicit */unsigned char) ((signed char) (unsigned char)119));
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) 2301339409586323456LL))));
        var_42 &= max((((/* implicit */int) (unsigned short)41305)), ((~(((/* implicit */int) (unsigned char)224)))));
    }
    var_43 *= ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)120))))));
}
