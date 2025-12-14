/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88483
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
    var_10 = ((/* implicit */short) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_9)))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_11 = ((/* implicit */_Bool) arr_3 [i_2] [6ULL]);
                var_12 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (signed char)-89)));
            }
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2581835788377148106ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1])))));
                arr_10 [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_6 [i_0 + 1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0 + 2]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (short)-13995))))) % (arr_8 [i_0 + 3] [i_0 + 3])));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) var_2);
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 0U))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((((/* implicit */unsigned long long int) arr_3 [8ULL] [i_1])) <= (var_6))), (((((/* implicit */_Bool) arr_3 [i_1] [i_5])) && (((/* implicit */_Bool) var_0)))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15864908285332403530ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (signed char)23)) > (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0]))) : (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (min((((/* implicit */unsigned int) (signed char)78)), (2202224700U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [(short)1])))))));
                            var_19 = ((/* implicit */signed char) max((17613359926623234956ULL), (((/* implicit */unsigned long long int) (signed char)-74))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] [i_4] = ((short) (+((-(arr_3 [(unsigned char)4] [i_0])))));
            }
            var_20 = ((/* implicit */unsigned short) (signed char)89);
            var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)79)) : (((((/* implicit */_Bool) (unsigned short)30886)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)74)))))));
            var_22 = ((/* implicit */unsigned char) ((_Bool) (~(-8550258114222038545LL))));
            var_23 -= ((/* implicit */unsigned char) (-(((((arr_3 [i_0] [i_1]) >> (((arr_4 [i_1]) - (1037151216U))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_24 = ((/* implicit */short) (~((-(((((((/* implicit */int) (signed char)-79)) + (2147483647))) >> (((arr_11 [i_0] [i_8] [i_8]) - (2213437528U)))))))));
            var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_7 [i_0] [i_0] [i_8] [i_8])))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) max(((signed char)-99), (((/* implicit */signed char) (_Bool)1))))))) & ((~(((/* implicit */int) ((short) 4294967295U)))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8160)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : ((-9223372036854775807LL - 1LL))));
            var_27 = ((/* implicit */signed char) (-(arr_3 [i_0 - 1] [i_9])));
        }
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            arr_32 [i_10] [i_0] = ((/* implicit */signed char) ((unsigned short) ((arr_16 [i_0 + 1]) | (((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (arr_15 [(signed char)4] [i_10] [i_0 + 1] [(_Bool)1])))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) 2100558332253373684ULL))));
                    var_29 = ((/* implicit */unsigned char) (((((+(var_1))) >= (((/* implicit */unsigned long long int) arr_37 [i_0 + 1] [i_0] [3LL] [i_0 + 2])))) ? (((/* implicit */int) ((signed char) (unsigned short)21490))) : (((/* implicit */int) ((unsigned short) arr_20 [i_0] [i_10] [i_11] [i_12] [i_12])))));
                    arr_40 [4ULL] [i_11] [i_11] [i_10] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (arr_24 [i_0] [i_10] [i_12])))))) ? (((/* implicit */int) (signed char)-114)) : (min((((/* implicit */int) ((_Bool) var_6))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9))))))));
                    var_30 -= ((/* implicit */unsigned short) arr_24 [i_0 + 3] [i_0 + 2] [i_0 + 3]);
                }
                for (long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) (signed char)4);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+(((/* implicit */int) min((arr_21 [i_0 + 2] [i_0] [i_0] [3U] [i_0 + 2]), (arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1])))))))));
                    var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_10] [i_11])) : (((/* implicit */int) arr_39 [(_Bool)0] [i_10] [i_11] [i_13]))))) ? (((((/* implicit */_Bool) 15308560765379513151ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) arr_26 [i_0 + 3] [i_0 + 2] [i_0])))));
                }
                var_34 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) ((short) (unsigned short)57376))) ? (-837308221595052930LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17007568704242862303ULL)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned short)8160)))))))));
            }
        }
        var_35 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max((arr_30 [10]), (((/* implicit */unsigned long long int) (short)-15419))))) ? (((((/* implicit */_Bool) arr_4 [2U])) ? (arr_2 [0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (arr_9 [i_0 + 2] [i_0 - 1] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16341)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31177))) : (1439175369466689313ULL)));
        var_37 = ((/* implicit */_Bool) ((var_3) + (((/* implicit */int) arr_43 [i_14]))));
    }
    for (short i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-1)))) : (((/* implicit */int) (short)-12046))));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                {
                    var_39 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) (~(var_3)))), (((((/* implicit */_Bool) arr_48 [i_15] [(short)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4107547487U))))));
                    var_40 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_46 [i_17])) ? (856257536989898464LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_15] [i_16] [(unsigned short)17] [(signed char)10]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)30407)) : (((/* implicit */int) ((signed char) var_6))))))));
                    var_41 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)46482))));
                    var_42 -= (((+(((/* implicit */int) arr_51 [i_17] [i_17] [i_16] [i_15])))) * (((/* implicit */int) var_4)));
                }
            } 
        } 
        arr_53 [i_15] = ((/* implicit */short) min((max(((-(((/* implicit */int) (unsigned char)206)))), (((((/* implicit */_Bool) -3860730604367563813LL)) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) (short)32551)))))), (((((/* implicit */int) (unsigned short)8190)) << (((((/* implicit */int) max(((unsigned short)46482), (((/* implicit */unsigned short) (signed char)-64))))) - (65456)))))));
    }
}
