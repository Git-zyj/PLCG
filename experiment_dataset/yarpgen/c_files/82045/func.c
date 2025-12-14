/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82045
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
    var_14 = ((/* implicit */short) var_7);
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)-15))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8030114886602108132LL)) ? (((/* implicit */int) arr_3 [16])) : (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-15)))), ((+(((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0 - 1])), (arr_1 [3ULL]))))))));
                var_17 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (var_10)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) min((((arr_6 [i_2] [(short)14]) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_7 [i_3])))), (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_2] [i_3])), (arr_7 [i_2]))))));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_2 [i_2]))));
                var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (!((_Bool)1))))) || (((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) arr_1 [i_4])))))));
                var_21 = ((/* implicit */unsigned short) (+((((-(((/* implicit */int) (_Bool)1)))) | (min((((/* implicit */int) (_Bool)0)), (-1764345376)))))));
                var_22 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [7] [i_3] [i_4]))) : (arr_4 [i_2])))))));
            }
            for (short i_5 = 2; i_5 < 14; i_5 += 1) 
            {
                arr_13 [(signed char)8] [i_3] [i_5] = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned char) (signed char)-23))), ((+(((/* implicit */int) (unsigned short)32945)))))) | (min((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_11)) << (((/* implicit */int) (signed char)22))))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_16 [i_2] [i_3] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5 + 1])) && ((!(((/* implicit */_Bool) arr_7 [i_5 + 1]))))));
                    var_23 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_2] [i_5 + 2] [i_5]))), (var_6)));
                    var_24 = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-6585395730586155050LL)))) ? (((/* implicit */int) arr_9 [i_2] [i_5 + 2] [i_5] [i_6])) : (((/* implicit */int) min((var_4), (((/* implicit */short) arr_0 [i_5] [i_6]))))))) > (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)16)))) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_13)))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    var_25 |= ((/* implicit */short) 4U);
                    var_26 = ((unsigned char) (unsigned short)32591);
                    var_27 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)16)));
                    var_28 = ((/* implicit */signed char) ((((-7400989013875670659LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)94))))) + (6585395730586155049LL)));
                }
                var_29 *= ((/* implicit */long long int) (_Bool)1);
            }
            for (int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((unsigned char) var_11));
                            arr_31 [i_2] [i_2] [i_9] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) - (var_10)))) ? (6585395730586155063LL) : (((/* implicit */long long int) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_3), ((signed char)-112)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_28 [(signed char)10])))) : (min((-7400989013875670690LL), (((/* implicit */long long int) (unsigned short)51695))))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            arr_38 [i_3] [i_3] [i_8] [i_11] [i_12] [i_2] = ((/* implicit */unsigned char) (-(min((2147483647), (((/* implicit */int) var_13))))));
                            var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((1088296932) != (((/* implicit */int) (unsigned short)32945))))), (3505057484U)));
                            var_33 = ((/* implicit */unsigned int) (unsigned short)60390);
                            var_34 = ((/* implicit */long long int) (unsigned short)32613);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_42 [i_2] [i_13] [i_8] [i_8] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_35 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29366))) : (arr_5 [i_2])))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) | (arr_2 [i_3])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1055078415213554294ULL))) : (((/* implicit */unsigned long long int) min((arr_17 [i_2] [(signed char)2] [i_2] [i_2]), (((/* implicit */long long int) var_3))))))) != (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_2] [i_2] [i_2] [i_2])))));
                        var_36 = ((/* implicit */signed char) min((min((arr_12 [i_14] [i_13] [i_8]), (((/* implicit */long long int) (signed char)-15)))), ((-(arr_12 [i_2] [i_2] [i_2])))));
                        var_37 = ((/* implicit */long long int) var_4);
                        var_38 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_14] [i_8] [i_14]))) : (((((/* implicit */_Bool) 1641977003159591666LL)) ? (((/* implicit */unsigned long long int) -1)) : (7720584377084164664ULL)))))));
                    }
                    var_39 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_13)), (3407616657U)));
                }
            }
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_3]))) ? (((/* implicit */int) ((((/* implicit */int) arr_36 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10])) != (((/* implicit */int) max((((/* implicit */short) arr_43 [i_3] [i_2] [i_3])), (var_4))))))) : (((/* implicit */int) arr_43 [i_3] [i_3] [i_2])))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39823))) : (arr_5 [i_15])))) ? (16334565786796633857ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-3)) - (((/* implicit */int) (unsigned char)106))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1268684675)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)53)))) : (((/* implicit */int) arr_0 [i_2] [i_2])))))));
            var_42 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_2] [i_15] [(_Bool)1] [i_15]))));
            arr_48 [i_15] [i_15] = ((/* implicit */unsigned char) ((signed char) arr_40 [i_2] [i_15] [i_15] [i_15]));
        }
        var_43 = max(((~(((/* implicit */int) (signed char)-42)))), (((/* implicit */int) max((arr_30 [i_2]), ((unsigned short)25713)))));
        var_44 ^= ((/* implicit */unsigned char) min((min((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)169))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (short)7757)))))), (((/* implicit */int) min(((signed char)96), (((/* implicit */signed char) (_Bool)1)))))));
    }
    for (short i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-57)), ((unsigned char)137)))) - (0))));
        var_46 = ((((((/* implicit */int) arr_7 [i_16])) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)25713)) : (((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)25712)), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_8)))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (8321113008838045810LL))) * (((/* implicit */long long int) arr_28 [i_16])))));
    }
}
