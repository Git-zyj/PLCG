/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69573
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
    var_11 = var_4;
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != ((~(1177967947)))))) >> (((((unsigned long long int) (unsigned short)36738)) - (36712ULL)))));
        var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_0])), (min((max((-1505998802), (((/* implicit */int) arr_0 [i_0])))), (max((-475861075), (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) min((var_14), ((~(((/* implicit */int) max(((unsigned char)162), (arr_1 [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1])))))))));
                        arr_10 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)28799);
                    }
                } 
            } 
            var_16 += ((/* implicit */int) (_Bool)1);
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15493561282758046670ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (-1125701631) : (((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)7] [(unsigned char)7] [i_0] [(_Bool)1]))))), (((((/* implicit */_Bool) (signed char)-81)) ? (3661771206908977337LL) : (6355043251876287079LL)))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)28801)), ((~(-1125701638)))))) ? ((-(((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_6 - 1])))) : (((/* implicit */int) arr_0 [i_4])))))));
                        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 3144889666U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3661771206908977342LL))))) : (((/* implicit */int) (unsigned short)33533)))) << (((7282804913888101976LL) - (7282804913888101955LL)))));
                        var_20 = max((((((/* implicit */_Bool) 3661771206908977344LL)) ? (arr_17 [i_6 - 1] [i_6] [i_6] [i_6]) : (((/* implicit */int) (short)-32320)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6 - 1] [(short)1] [(short)1] [i_6 + 1])) && (((/* implicit */_Bool) arr_17 [i_6 - 2] [i_6] [i_6] [i_6]))))));
                    }
                } 
            } 
        }
        var_21 |= ((/* implicit */unsigned char) arr_5 [(unsigned short)7] [i_0] [(unsigned short)7]);
    }
    for (unsigned short i_7 = 3; i_7 < 18; i_7 += 4) 
    {
        var_22 -= ((/* implicit */signed char) (+(((unsigned long long int) (short)-8))));
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 18; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((signed char) (-(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))))))));
                                arr_31 [i_7 - 3] [i_8] [i_9] [i_8] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [i_7 - 3] [i_8] [i_9] [i_11]) & (arr_27 [i_7 + 2] [i_7 + 2] [i_11] [0])))) ? (min((((/* implicit */int) arr_24 [i_7 - 1])), (min((((/* implicit */int) (short)-32317)), (var_5))))) : (((/* implicit */int) max((arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 - 2]), (((/* implicit */short) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_32 [i_7] [i_9] = ((/* implicit */unsigned short) ((unsigned int) arr_24 [i_9]));
                    arr_33 [i_7] [8LL] [i_7] |= -7282804913888101977LL;
                }
            } 
        } 
        arr_34 [i_7] |= ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (3285100074U)))));
        var_24 = (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-123))))), (arr_22 [i_7 - 3]))));
    }
    for (signed char i_12 = 3; i_12 < 10; i_12 += 3) 
    {
        arr_37 [i_12] = (short)32751;
        arr_38 [i_12] [i_12] = ((/* implicit */short) arr_28 [i_12] [i_12] [i_12] [i_12 - 3]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) -1125701611)) ? (((((/* implicit */_Bool) -6298325379476502914LL)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_12] [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12] [i_12])))));
            arr_41 [i_12] = ((/* implicit */short) (_Bool)1);
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) 3661771206908977341LL))));
            var_27 = ((/* implicit */unsigned short) (((_Bool)1) ? (1552417343243219435LL) : (((/* implicit */long long int) -310252763))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    {
                        arr_48 [i_15] [i_15] [i_15] [i_12] |= ((/* implicit */int) (+(7282804913888101968LL)));
                        var_28 = ((/* implicit */long long int) 4294967290U);
                        var_29 = (((_Bool)1) ? (3921639740U) : (((/* implicit */unsigned int) 1767917662)));
                        arr_49 [i_12] [i_12] [i_12] [i_12] [i_12 + 1] = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            arr_53 [i_12 - 3] [i_12 - 3] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1070817926852811729ULL), (((/* implicit */unsigned long long int) 3921639731U))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)65526))))), ((+(4294967293U)))));
            arr_54 [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-30629)) > (min((((/* implicit */int) (signed char)124)), (arr_26 [i_16] [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_12] [i_12 - 1] [i_12 + 1])) && (((/* implicit */_Bool) arr_21 [i_12] [i_12 - 2] [i_12 - 1])))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) + (-3591025536415950531LL)))))));
            var_30 |= ((/* implicit */_Bool) min((arr_42 [i_12 + 1] [i_16]), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) >> (((((/* implicit */int) arr_47 [i_16] [i_12] [i_12] [i_12] [i_12] [i_12])) - (102)))))))))));
        }
        for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_18 = 1; i_18 < 10; i_18 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_62 [i_12 - 2] [i_18] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (_Bool)1)) : (1725765262))) <= (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)65520)))))))));
                    var_31 -= ((/* implicit */short) arr_56 [i_17]);
                }
                var_32 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_47 [i_12 - 2] [(unsigned short)5] [i_18] [i_18] [i_18] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25004))) : (arr_27 [i_12] [i_17] [3U] [13U]))))) << (((((/* implicit */_Bool) arr_46 [i_12 + 1] [i_18 + 1] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32))) : (3921639731U)))));
                arr_63 [i_12] [i_12 - 1] [i_17] [6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7282804913888101954LL)) ? (((/* implicit */int) (unsigned short)1642)) : (((/* implicit */int) (signed char)99))));
            }
            for (unsigned short i_20 = 1; i_20 < 10; i_20 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (signed char)119)))))));
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) -1496754235003918871LL))));
            }
            var_35 = ((/* implicit */int) (signed char)-123);
        }
    }
    for (int i_21 = 0; i_21 < 16; i_21 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_71 [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)1))))));
            arr_72 [(signed char)4] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)20834)), (373327566U)));
            arr_73 [i_21] = ((/* implicit */unsigned int) (signed char)48);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            for (unsigned short i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                {
                    var_36 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_22 [i_21])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) arr_23 [11ULL])) & ((-9223372036854775807LL - 1LL)))));
                    var_37 += ((/* implicit */signed char) ((((/* implicit */int) max((max(((short)-32767), (((/* implicit */short) (unsigned char)0)))), ((short)19901)))) % ((~(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
}
