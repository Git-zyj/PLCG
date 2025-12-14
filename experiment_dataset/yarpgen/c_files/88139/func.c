/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88139
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
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((min((((/* implicit */signed char) var_7)), ((signed char)-78))), (((/* implicit */signed char) ((((/* implicit */_Bool) -1264615076)) && (((/* implicit */_Bool) var_3)))))))), ((-(((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551604ULL))))) : (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) (unsigned short)6)))))));
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15944)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_17 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (var_4)))));
                        arr_9 [i_2] [i_1] [i_0] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_2 [i_0 - 3])))), (((/* implicit */int) arr_2 [i_0 - 3]))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */int) ((((max((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_12))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        arr_10 [i_0] |= ((/* implicit */signed char) arr_5 [i_0] [i_0 + 1] [i_0]);
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((long long int) 18446744073709551615ULL)))) * (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (-1)));
        var_21 = ((((/* implicit */_Bool) ((signed char) (signed char)49))) ? (((((/* implicit */_Bool) var_11)) ? (arr_11 [i_4]) : (arr_11 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1264615047)))))));
        arr_13 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)10830)) <= (((/* implicit */int) (unsigned short)35247))));
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) -6382580648892180733LL)) ? (arr_18 [i_5] [i_4]) : (((/* implicit */long long int) 1511571543)))) ^ (var_0)));
                    arr_20 [i_4] [i_5] [i_5] [i_6] = ((arr_11 [i_5 - 2]) / (((/* implicit */long long int) var_8)));
                    var_23 = ((/* implicit */int) ((long long int) arr_15 [i_6 - 1] [i_5] [i_5 + 2]));
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_16 [i_7] [i_7] [i_7]), (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) -319833571))))))) ? (min((((/* implicit */long long int) max(((unsigned short)18798), ((unsigned short)22126)))), (9022264350412871811LL))) : (((/* implicit */long long int) 1559392217))));
        var_25 = ((((/* implicit */_Bool) 0ULL)) ? (9223372036854775807LL) : (4485520937169670141LL));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_0)))))))));
        var_27 = ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_23 [i_7]))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_28 = ((((/* implicit */_Bool) arr_25 [i_8])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8])) - (((/* implicit */int) (signed char)-103))))));
        arr_27 [i_8] [i_8] = ((/* implicit */short) var_3);
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) <= (var_3)));
        var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)16207))));
        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46735)) - (((/* implicit */int) arr_25 [i_8])))))));
    }
    var_31 = ((/* implicit */long long int) ((((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_4))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
