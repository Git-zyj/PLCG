/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55400
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
    for (int i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((1015270871) >= (((/* implicit */int) min((arr_1 [i_0]), (var_9)))))))));
        var_11 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((signed char) 502104871)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 121874256524866694LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (((long long int) var_3)))), (((/* implicit */long long int) (-((+(var_6))))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
        arr_7 [i_1] = ((int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) / (121874256524866685LL)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (-1715661249)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (short)8184))) ? (((var_3) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(-1715661234))))));
        var_12 = ((/* implicit */short) arr_9 [i_2]);
        arr_12 [7ULL] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)127));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) (~(-2049354016)));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                for (unsigned short i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_21 [11] [(unsigned short)12] [(unsigned short)12] [i_4] [i_4] = ((/* implicit */long long int) var_1);
                        var_14 = ((/* implicit */unsigned char) (+(((var_3) ? (((/* implicit */int) (short)15075)) : (((/* implicit */int) (_Bool)1))))));
                        var_15 = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned int) 15))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            {
                arr_26 [i_7] [12] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)0))))));
                arr_27 [i_8] [i_7] [i_7] = ((/* implicit */int) arr_13 [i_7]);
                arr_28 [i_7] [(signed char)5] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2049354016)) ? (((/* implicit */unsigned long long int) 59792525)) : (((((/* implicit */_Bool) var_1)) ? (12933641035119911493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ^ (((/* implicit */unsigned long long int) 4099600054U))));
            }
        } 
    } 
}
