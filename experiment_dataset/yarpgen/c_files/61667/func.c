/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61667
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
    var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_16));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) 35958428274786304LL);
                arr_5 [i_0 - 1] [(unsigned short)22] [i_1 - 1] &= ((/* implicit */int) var_16);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((min((arr_7 [i_2]), (((/* implicit */long long int) max(((unsigned char)32), (((/* implicit */unsigned char) var_6))))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) : ((-(arr_6 [i_2])))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (max(((unsigned char)32), ((unsigned char)255)))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_6 [i_2]))))));
    }
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */int) (unsigned char)224);
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            var_21 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned int) arr_13 [i_3 + 2])), (min((1951284746U), (((/* implicit */unsigned int) var_12)))))));
            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_3] [i_4 - 1]))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_8 [i_3 - 2]);
                        var_24 = ((/* implicit */unsigned char) max((max((max((var_1), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))), (max((((/* implicit */unsigned int) ((short) (unsigned short)8))), ((-(1951284769U)))))));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_25 -= ((/* implicit */unsigned int) min((((arr_20 [i_3 + 2] [i_3 + 2]) - (-1))), ((-(((/* implicit */int) (unsigned char)55))))));
            arr_25 [i_3 - 2] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_13 [i_3 + 2])) ^ (((/* implicit */int) arr_13 [i_3 + 1]))))));
            var_26 += ((/* implicit */unsigned long long int) max(((unsigned short)8), (((/* implicit */unsigned short) (unsigned char)239))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 4; i_8 < 21; i_8 += 2) 
        {
            arr_29 [i_3] = ((/* implicit */signed char) arr_3 [i_3 + 3] [i_3 + 1] [i_8 - 1]);
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_8)) % (arr_27 [i_3 + 3] [i_3 + 3] [i_3])));
        }
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) (((-(((((/* implicit */int) (short)5199)) & (-1))))) % (((/* implicit */int) (unsigned short)65528))));
                            arr_40 [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)27))));
                            arr_41 [i_3] [i_3 + 3] [i_10] [i_3] [i_3] [i_3 + 3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6049131250908999586LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16080))) : (3563934734U)))) ? (max((((/* implicit */long long int) (unsigned short)3584)), (1073741824LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511)))));
                            arr_42 [i_3] [i_9] [i_10 - 1] [(signed char)20] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (signed char)84))));
                        }
                    } 
                } 
            } 
            var_29 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_3]))));
            /* LoopSeq 1 */
            for (long long int i_13 = 4; i_13 < 20; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 3; i_14 < 21; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            arr_51 [i_3 - 1] [i_3 - 1] [13U] [(_Bool)0] [i_15] = ((/* implicit */long long int) var_0);
                            var_30 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46894)) + (((/* implicit */int) max((arr_3 [i_9] [17LL] [i_15]), (((/* implicit */unsigned short) var_10)))))))) | (arr_17 [(signed char)15])));
                        }
                    } 
                } 
                arr_52 [6LL] [6LL] [i_9] [i_13 + 1] = (_Bool)1;
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_18 = 3; i_18 < 21; i_18 += 4) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (var_0)));
                    var_32 = ((((/* implicit */_Bool) arr_15 [i_18 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_15 [i_18 + 1] [i_3 + 2]));
                }
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        {
                            arr_68 [i_3] [i_3] [i_3] [(unsigned short)12] [i_3 + 2] [i_3] [i_3] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) var_13)) / (arr_36 [i_3 - 2]))) : (((arr_6 [i_20]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                            var_33 = var_5;
                            arr_69 [i_20] [i_20] [1U] [i_17] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) min((var_8), (1626677815))))))), ((short)16091)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        {
                            arr_78 [13LL] [i_21] = ((/* implicit */unsigned int) ((arr_67 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3]) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (-4186169187614756598LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (unsigned char)32))))) : (((/* implicit */int) (unsigned short)13))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (arr_35 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_21])))) ? (((/* implicit */long long int) (-(arr_64 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_3] [i_3 - 2])))) : (max((var_16), (((/* implicit */long long int) arr_35 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_21]))))));
                            var_35 = ((/* implicit */long long int) min((((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) && (var_0)))))), (((((/* implicit */_Bool) arr_73 [i_3 - 1] [i_3] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_21 [i_3 + 3])) : (((/* implicit */int) arr_16 [i_3 + 3]))))));
                        }
                    } 
                } 
            }
            arr_79 [i_3 + 3] [i_16] = (~(((((/* implicit */_Bool) (unsigned short)65518)) ? (5256173525747809102LL) : (9223372036854775807LL))));
            var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) <= (((/* implicit */int) (_Bool)1))));
        }
        var_37 = ((/* implicit */unsigned long long int) (short)-16081);
    }
    var_38 = ((/* implicit */unsigned int) ((int) var_14));
    var_39 &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-16081)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))))) : (((/* implicit */int) max((var_3), ((!(((/* implicit */_Bool) 0LL)))))))));
}
