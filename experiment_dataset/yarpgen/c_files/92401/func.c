/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92401
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */int) max((var_6), ((unsigned short)32768))))))) | (((min((var_7), (((/* implicit */unsigned long long int) var_10)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1478866259)) ? (((/* implicit */int) var_8)) : (var_11))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 *= max(((!(((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) (unsigned short)13184)))))), (var_3));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0 + 2] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)177))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                            {
                                var_16 -= ((/* implicit */int) ((4656235652075583698LL) == (4697488852941714160LL)));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_5))));
                                arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) ((-6061691694187257479LL) <= (((/* implicit */long long int) -871446640))))))))) : (-2046025998494288161LL)));
                                var_18 = ((((/* implicit */int) var_13)) < (((/* implicit */int) ((unsigned char) (-(arr_12 [i_0] [i_1] [i_2] [i_3 + 2] [i_3 + 2]))))));
                                var_19 = ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) ((short) (~(16020668106307777139ULL)))))));
                            }
                            for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0 + 1] [i_0])) ? (((long long int) 1072693248)) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))))))))));
                                var_20 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (-3116247434369193853LL))) | (var_12))) == (((/* implicit */long long int) ((((/* implicit */int) arr_0 [13LL] [i_1 + 4])) >> (((((/* implicit */int) ((short) 2426075967401774477ULL))) - (19841))))))));
                            }
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [(short)11] = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_12 [12LL] [i_0] [i_1 + 2] [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 + 3] [i_0] [i_1 + 4] [i_1] [19])))))) ? (min((13708311071614798016ULL), (((/* implicit */unsigned long long int) 2737874151487923713LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2426075967401774459ULL)))))))), ((((!(((/* implicit */_Bool) arr_10 [i_1] [i_0 + 2] [9])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (arr_15 [i_1] [i_1] [17U] [i_1] [i_1 + 3] [i_0 - 2])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((_Bool) ((arr_7 [i_6] [i_6] [i_6]) ? (2426075967401774486ULL) : (2426075967401774486ULL))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (signed char i_8 = 4; i_8 < 9; i_8 += 2) 
            {
                {
                    var_22 = (!(((/* implicit */_Bool) (-(arr_1 [i_6])))));
                    arr_31 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((long long int) ((unsigned int) arr_27 [1LL] [i_7] [i_6]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) ((12022685074496387286ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2048)))))))))));
                }
            } 
        } 
        arr_32 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + ((~(16020668106307777151ULL)))));
        var_23 = ((/* implicit */long long int) ((((int) arr_1 [i_6])) + (((((/* implicit */_Bool) 6951714303114670615ULL)) ? (871446612) : (-1072693249)))));
    }
}
