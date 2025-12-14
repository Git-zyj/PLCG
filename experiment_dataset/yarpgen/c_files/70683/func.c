/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70683
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
    var_12 = ((/* implicit */long long int) (+(2147483628)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0])))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((18159909008424684565ULL) >> (((((/* implicit */int) var_2)) - (53096))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483636)) && (((/* implicit */_Bool) -2147483628)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((-(((/* implicit */int) (short)-15190)))) << (((min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)10] [(short)10]))) : (arr_2 [19] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-111))))))) - (97U))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            var_16 *= ((/* implicit */_Bool) ((1229050939999491357ULL) | (((/* implicit */unsigned long long int) (~(2147483631))))));
                            arr_18 [i_1] [i_1] [i_3 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_9 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) > (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) -2147483628)) : (-4606688071013786423LL)))));
                        }
                        var_17 += ((/* implicit */_Bool) 2147483641);
                        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_1]))))) : (max((4294967290U), (((/* implicit */unsigned int) -1450268081))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? ((~(6356604992918308444LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) || (((/* implicit */_Bool) 4294967290U))));
                            arr_22 [(short)10] [8ULL] [i_3 - 3] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)-1))) ? ((~(arr_1 [i_3 - 2]))) : (((/* implicit */unsigned long long int) arr_21 [i_1]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) (~(((int) (_Bool)1))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (((/* implicit */int) arr_17 [i_4 - 1])) : (-2147483621)));
                            arr_25 [i_1] = ((/* implicit */unsigned int) arr_13 [i_3 + 1] [i_1] [i_3 + 2]);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_3 + 1] [i_4 - 1] [i_7])) ? (arr_12 [i_1] [i_2] [i_4 - 1] [i_7]) : (arr_12 [i_1] [i_1] [i_3 - 1] [i_4 - 1])));
                            var_23 = ((/* implicit */short) ((unsigned char) var_9));
                        }
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) (unsigned char)169)) != (-284724133))))));
                    }
                } 
            } 
        } 
        arr_26 [i_1] = max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (2147483612) : (2095832751)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7370788258073331816LL)) || (((/* implicit */_Bool) var_11))))) : ((~(((/* implicit */int) var_2))))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) arr_15 [(signed char)16] [(signed char)16] [(unsigned short)16]);
        var_26 = ((/* implicit */int) arr_9 [10U] [10U]);
    }
}
