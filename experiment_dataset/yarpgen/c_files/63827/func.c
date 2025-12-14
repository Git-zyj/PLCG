/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63827
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
    var_11 = (+(var_2));
    var_12 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 140737488355327LL))) || ((!((_Bool)0)))))) - (((/* implicit */int) ((((int) var_10)) != (max((((/* implicit */int) var_7)), (var_9))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7247)) ? (-140737488355328LL) : (((/* implicit */long long int) -24))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [5ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (12475472467697425314ULL))))) : (((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12475472467697425314ULL)) ? (2147483647) : (536870911)))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (5971271606012126302ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))))))));
        var_14 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (max((arr_0 [i_0]), ((+(((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [(unsigned short)1] [(_Bool)0] = ((_Bool) -388336622);
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (arr_5 [i_0] [i_0])))) ? (((2147483647) << (((var_8) - (418059491))))) : (((int) arr_3 [i_0] [i_0]))))) ? (((int) (unsigned short)10306)) : ((~(arr_0 [i_0]))))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_3] [i_3] [i_4] = ((/* implicit */int) arr_14 [i_4]);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_17 = (((!(((/* implicit */_Bool) 226941137)))) ? (max((((/* implicit */int) ((_Bool) arr_1 [1LL]))), ((((_Bool)1) ? (arr_16 [(_Bool)0] [i_4] [(_Bool)0] [i_3]) : (arr_12 [i_3]))))) : (var_4));
                var_18 += ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) 3621806160U)) ? (1468832864U) : (3571052423U)))) & (((/* implicit */unsigned int) ((arr_8 [i_3] [0LL] [(_Bool)1] [i_3]) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_5)))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [10] [i_4] [10] [3ULL] [i_7]))) + (((((/* implicit */_Bool) arr_7 [(unsigned short)5] [i_3] [10LL] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3] [i_5] [i_3] [8])) & (var_1)))) : (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1848726812U)))))));
                            var_20 = ((/* implicit */unsigned short) var_2);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned long long int) var_8)))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        arr_32 [i_3] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned long long int) arr_17 [i_10]);
                        arr_33 [i_3] [i_3] [8LL] [i_3] [i_8] [i_8] = ((/* implicit */int) ((min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_28 [i_10] [5] [i_3])), (var_6)))), (max((var_5), (((/* implicit */long long int) arr_17 [i_10])))))) ^ (((/* implicit */long long int) ((min((arr_5 [i_10] [i_8]), (arr_31 [(_Bool)1] [i_8] [i_9] [i_9] [i_9]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) ((((unsigned int) arr_16 [i_3] [i_3] [(_Bool)1] [i_3])) << (((max((arr_27 [i_3] [5U]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [2])) ? (31) : (var_1)))))) - (7930590103405367792LL)))));
        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_10)) | (arr_13 [8])))))));
    }
    var_24 = (+(-2147483647));
    var_25 = (((+(((((/* implicit */_Bool) 49)) ? (((/* implicit */int) (unsigned short)32760)) : (((/* implicit */int) (unsigned short)46272)))))) << (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_3))))));
}
