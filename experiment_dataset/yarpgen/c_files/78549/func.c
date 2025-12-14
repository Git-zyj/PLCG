/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78549
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)17))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (14614673896883823294ULL))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = (short)27317;
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((signed char) (short)-27319));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_6))));
    }
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned int) max(((unsigned short)1631), (((/* implicit */unsigned short) (_Bool)1))));
        var_20 = ((/* implicit */unsigned short) ((unsigned int) ((long long int) 12634910854773986068ULL)));
    }
    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) var_9);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 18446744073709551592ULL))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [5U] [i_5 + 2])) < (((/* implicit */int) (short)-27327))))) : ((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)32965))) : ((+(((unsigned long long int) (unsigned short)48826))))));
        arr_18 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1])) && (((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23))))))))) % (((var_0) * (max((((/* implicit */unsigned long long int) var_5)), (var_7)))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (unsigned short)16709)), (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)27319))) : (((max((var_11), (((/* implicit */long long int) var_6)))) | (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_23 [i_6] [i_7] [i_7] = ((/* implicit */_Bool) ((var_13) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_6]))))));
            arr_24 [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) (~(var_15))));
            arr_25 [i_6 + 2] [i_6 + 2] [i_6 + 2] = ((unsigned int) ((arr_20 [i_6] [i_6 + 4]) >= (arr_20 [i_6] [i_6 + 2])));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_8] [i_9] [i_8] = ((var_3) ? (arr_19 [12ULL]) : (31LL));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(var_13)))) >= ((+(((((/* implicit */_Bool) (unsigned short)16677)) ? (6107572220555457736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (var_16) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_10)))) ? (((arr_28 [i_6] [i_6] [i_10] [i_10]) & (arr_28 [i_10] [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4LL)) ? (2939246766U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27311))))))))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max(((+(arr_2 [i_6 + 1] [i_6 - 2]))), (((((/* implicit */_Bool) max((arr_33 [i_6] [(signed char)9]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 4294967292U)) : (0ULL))))))))));
            arr_35 [i_6] [i_6] [i_6] &= ((/* implicit */short) var_8);
            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2174295915U)) ? (9223372036854775804LL) : (((/* implicit */long long int) 790213418U))))) ? (((((/* implicit */_Bool) arr_30 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6] [i_6])) ? (10ULL) : (arr_30 [0U] [i_6 + 1] [i_10] [0U] [8U] [8U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_6] [i_6 + 4] [i_10] [i_6] [i_6 + 4] [i_10]) > (arr_30 [i_10] [i_6 + 3] [i_10] [i_10] [i_6] [i_6 + 3]))))));
        }
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_6] [i_6] [i_6 - 1])), (var_15)))), ((((((-9223372036854775807LL - 1LL)) >= (var_13))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_13)))) : (min((var_10), (((/* implicit */unsigned long long int) var_4)))))))))));
    }
    var_28 = max((11972205599309442357ULL), (((/* implicit */unsigned long long int) var_15)));
}
