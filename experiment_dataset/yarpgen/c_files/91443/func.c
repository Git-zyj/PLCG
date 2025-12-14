/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91443
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_11 |= ((/* implicit */signed char) (+(var_5)));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_0 [i_0]))))) >> ((((~(((/* implicit */int) (unsigned char)5)))) + (35)))))) ? (((((/* implicit */_Bool) 5748836606251433318LL)) ? (((5748836606251433318LL) >> (((var_2) + (874577230))))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
        }
        for (short i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (short)-28438)) : (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10380638499137294633ULL)))))))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)0)), (var_6))) >> ((((~(((/* implicit */int) (short)-31712)))) - (31683)))))))))));
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) min(((+(min((((/* implicit */long long int) var_9)), (4024113767655004568LL))))), (((/* implicit */long long int) var_6))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_1 [i_2 - 1]))))))));
        }
        for (short i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
        {
            var_16 &= ((/* implicit */unsigned char) arr_4 [i_0] [(short)12]);
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
        }
        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            var_18 = (((!(arr_5 [i_4 + 4] [i_4 + 4] [i_4 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8066105574572256986ULL)) || (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) 10380638499137294635ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 + 4] [i_4 + 1] [i_4 + 2]))) : (var_7))));
            var_19 |= ((/* implicit */unsigned short) (_Bool)1);
        }
        /* LoopSeq 2 */
        for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) (~(var_2)));
            var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_20 [i_5 - 1])) : (((/* implicit */int) arr_20 [i_5 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((arr_18 [i_6] [i_7]) * (((/* implicit */unsigned long long int) 1592557791U)))))))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned int) 3024717395834436131LL)))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [i_5] [i_5 - 1]))) : (var_5)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)20061)) < (((/* implicit */int) var_3)))))));
                            var_26 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((int) var_5))) : (var_5)))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) (+(-5748836606251433305LL)))) - (min((((/* implicit */unsigned long long int) (short)-26751)), (arr_22 [4LL] [i_5 - 1] [18U] [i_5 - 1]))))), (((/* implicit */unsigned long long int) (unsigned short)25394))));
                /* LoopSeq 2 */
                for (int i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    var_28 = ((/* implicit */unsigned long long int) 2047U);
                    var_29 = ((/* implicit */unsigned long long int) ((var_2) ^ (((((((var_2) ^ (((/* implicit */int) (short)32512)))) + (2147483647))) >> ((((~(((/* implicit */int) var_4)))) + (232)))))));
                    var_30 += ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 362186066U)) : (161579420688387962ULL)))))));
                }
                for (unsigned short i_11 = 3; i_11 < 19; i_11 += 4) 
                {
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((var_2) + (874577240)))))) ? (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (661835887U))))))) : (((((/* implicit */_Bool) -569706250)) ? (((/* implicit */int) arr_28 [i_5] [i_6 + 2] [i_6 + 1] [i_11] [(unsigned short)16])) : (((/* implicit */int) (_Bool)1))))));
                    var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (((_Bool)1) ? (-5360244995788897080LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (((((((-(((/* implicit */int) var_4)))) + (2147483647))) << (((((min((-1967089271), (((/* implicit */int) var_1)))) + (1967089293))) - (22))))) >> (((((int) max((var_0), (((/* implicit */unsigned short) (_Bool)1))))) - (13469))))))));
                }
            }
        }
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            var_34 = var_1;
            var_35 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [8U]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_36 += ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-93)) % (var_2)))));
                arr_45 [i_0] [i_14] = ((/* implicit */int) var_1);
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (-(2647395447521652703ULL))))));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_0])) || (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (3633131409U)))));
                /* LoopSeq 3 */
                for (unsigned short i_15 = 1; i_15 < 17; i_15 += 3) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_15 - 1] [i_15 + 1] [i_15 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_15 + 3] [(_Bool)1]))) : (var_7)));
                    var_40 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46872)) && (((/* implicit */_Bool) arr_48 [i_0] [i_13] [i_15 + 3] [i_15 + 1] [i_13]))));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (var_6)))) - (-8291106717190675738LL)));
                }
                for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    var_42 = var_7;
                    var_43 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_4)) ? (-2056055375) : (((/* implicit */int) var_9))))));
                }
                for (unsigned char i_17 = 4; i_17 < 17; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) arr_46 [i_17] [6U] [i_14] [i_14] [i_14]))));
                        var_45 = ((((/* implicit */int) ((((/* implicit */_Bool) -1864626481)) || (((/* implicit */_Bool) arr_34 [(unsigned short)2] [i_14] [(unsigned short)2] [i_18]))))) <= (((/* implicit */int) ((((/* implicit */int) arr_41 [i_0])) > (var_2)))));
                        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_0]))) && (arr_20 [i_17 - 3])));
                    }
                    var_47 -= ((((/* implicit */_Bool) ((var_5) >> (((var_5) - (2884503246U)))))) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) arr_24 [(signed char)12] [i_17 + 3] [i_14] [i_17] [i_13] [i_13])));
                }
            }
            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((_Bool) (short)5940)))));
            var_49 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_13] [i_13]))));
        }
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 2) 
        {
            var_50 = ((/* implicit */short) arr_61 [i_0] [15U] [i_19]);
            var_51 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (_Bool)1)))))))), (min((var_4), (((/* implicit */unsigned char) var_1)))));
            /* LoopNest 2 */
            for (unsigned int i_20 = 1; i_20 < 19; i_20 += 1) 
            {
                for (unsigned int i_21 = 4; i_21 < 18; i_21 += 4) 
                {
                    {
                        var_52 = ((/* implicit */int) (unsigned short)46872);
                        var_53 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (569706263) : (((/* implicit */int) (unsigned char)154)))), (((/* implicit */int) arr_68 [(_Bool)1] [2] [i_20 + 1] [17] [i_21] [i_21]))));
                    }
                } 
            } 
        }
    }
    var_54 |= ((/* implicit */_Bool) var_0);
    var_55 = ((/* implicit */_Bool) var_9);
    var_56 -= var_1;
}
