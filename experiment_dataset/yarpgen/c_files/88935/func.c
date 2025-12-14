/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88935
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
    var_10 = ((/* implicit */unsigned char) min((((unsigned int) 23U)), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (signed char)(-127 - 1))))), (min((((/* implicit */int) var_2)), (var_3))))))));
    var_11 = max((var_1), (var_1));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_12 = ((signed char) max((min((arr_1 [i_0]), (arr_3 [i_0]))), (((/* implicit */signed char) ((_Bool) var_2)))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */long long int) arr_11 [i_0] [i_1 + 1] [i_2] [i_2]);
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)316)) ? (((int) min((((/* implicit */signed char) var_2)), ((signed char)-1)))) : (((/* implicit */int) max((arr_9 [i_3] [i_2] [i_1] [i_0]), ((signed char)0))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */int) ((signed char) max((((signed char) arr_11 [i_0] [i_0] [i_0] [i_0])), (arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_9 [i_0] [i_4 - 1] [i_5] [i_6]))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7]))))))))));
                            var_17 = ((/* implicit */_Bool) 0ULL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (signed char)-4))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_4 + 1] [i_8])) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_18 [i_0] [i_4] [i_8]))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-17))));
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-1)), (arr_13 [i_0] [i_4] [i_8])))) ? (((arr_4 [i_0] [i_4] [i_8]) ^ (arr_14 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) max((arr_13 [i_8] [i_4 + 2] [i_0]), (((/* implicit */int) var_9))))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-111)) / (((/* implicit */int) (signed char)-116)))))))))));
                var_21 |= ((/* implicit */unsigned char) max((995968917U), (995968943U)));
            }
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_9 [i_0] [i_4] [i_9] [i_10]);
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 2317845786U))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_4 - 3] [i_4 + 1])) : (((/* implicit */int) var_2))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_4 + 2] [i_4 + 3] [i_4 + 1])) - (((/* implicit */int) ((short) arr_24 [i_4] [i_9] [i_10])))));
                    var_26 = ((/* implicit */unsigned int) ((arr_4 [i_10] [i_4 - 1] [i_9]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)0)), ((+(((/* implicit */int) arr_33 [i_11] [i_4 + 2] [i_11 + 1]))))));
                            var_28 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_2))))) : (((((/* implicit */_Bool) (unsigned short)27380)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (signed char)26))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_9 [i_0] [i_4] [i_9] [i_4 - 2]), (arr_9 [i_9] [i_4 - 2] [i_9] [i_4 + 1])))))))));
            }
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_30 &= ((/* implicit */unsigned short) arr_42 [i_0] [i_4] [i_13] [i_13] [i_14] [i_15]);
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned char) min((arr_5 [i_0] [i_4 + 1]), (((/* implicit */unsigned short) max((((/* implicit */short) var_7)), (arr_19 [i_0] [i_14] [i_13] [i_14]))))))))));
                            var_32 |= ((/* implicit */unsigned char) min(((short)32767), (((short) arr_24 [i_4 - 3] [i_4 - 2] [i_4 + 1]))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)31))))))) | (max((1977121509U), (((/* implicit */unsigned int) (signed char)0))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) min((((/* implicit */int) arr_27 [i_0] [i_4 + 3] [i_13] [i_13])), (min((((((/* implicit */int) arr_43 [i_0] [i_4])) | (((/* implicit */int) (unsigned short)33391)))), (((/* implicit */int) arr_38 [i_0] [i_0] [i_4] [i_4] [i_13]))))));
                var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_0] [i_0] [i_13]))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_4] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_28 [i_0] [i_4] [i_4] [i_13])))) : (((var_3) / (((/* implicit */int) arr_16 [i_4] [i_4] [i_0] [i_0]))))))) <= (((unsigned int) min((((/* implicit */unsigned int) arr_15 [i_0] [i_13] [i_13])), (2317845786U))))));
            }
        }
    }
    for (int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */int) max((var_2), (((((/* implicit */_Bool) max((((/* implicit */short) arr_23 [i_16] [i_16] [i_16] [i_16])), (var_0)))) && (((/* implicit */_Bool) var_4))))));
        var_37 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-112)) || (((/* implicit */_Bool) (signed char)0))))), ((-(((/* implicit */int) arr_8 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))));
    }
    var_38 ^= ((/* implicit */int) var_4);
}
