/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86528
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((5917691372547387295ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55869))) <= (12529052701162164320ULL))))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)147))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_11 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_9))))) + (((((/* implicit */_Bool) 4150068027U)) ? (arr_0 [3U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))))))), (5917691372547387295ULL)));
        var_12 ^= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) 316941039)), (((806816958U) & (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) min((max((((/* implicit */int) var_6)), (0))), (((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) (_Bool)0))))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_6))));
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) 316941039)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) : (3850240383U))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_15 [i_2] [i_3] [i_5] [i_2] [(signed char)11] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 1])) / ((+(((/* implicit */int) arr_12 [i_4] [(unsigned char)21]))))));
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(816354937U))))));
                        var_16 = ((/* implicit */short) 3478612359U);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_3))));
        var_18 = ((/* implicit */signed char) ((int) ((((144899269U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))))) >> (((((/* implicit */int) min((((/* implicit */short) var_0)), ((short)-554)))) + (582))))));
    }
    for (short i_7 = 2; i_7 < 10; i_7 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(816354934U)))) | (((min((arr_18 [i_7]), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((arr_3 [i_7 + 2] [i_7 + 2]) - (543594421))))))))));
        var_20 |= ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_21 &= ((/* implicit */unsigned char) ((short) (+(var_5))));
            var_22 = (unsigned char)185;
            var_23 &= ((/* implicit */long long int) var_6);
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        {
                            arr_36 [i_7 - 1] [i_9] [i_10] [(unsigned char)6] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) 1565753546520447281LL)) ? (816354917U) : (3557355158U))) / (((/* implicit */unsigned int) ((308197712) / (((/* implicit */int) arr_30 [i_9] [i_7])))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3557355156U)) ? (3478612370U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))));
                            var_25 = ((/* implicit */signed char) var_6);
                            arr_37 [i_7] [i_7] [2] [2] [i_7] [i_7] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_18 [i_9])))) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)53421)) : (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) (unsigned char)61);
            var_27 = ((/* implicit */signed char) var_1);
        }
    }
    var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) (+(max((-316941040), (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) % (var_3))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55869)) ? (2597087219U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -6123525520015608195LL)) || (((/* implicit */_Bool) var_2))))) : (-1793975844))))))));
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_3))))))), (((((/* implicit */_Bool) 316941033)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17))))))))));
}
