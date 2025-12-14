/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97080
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
    var_16 = ((((/* implicit */_Bool) ((unsigned int) max((4433230883192832ULL), (4433230883192832ULL))))) && (((/* implicit */_Bool) -2079996650)));
    var_17 = ((/* implicit */unsigned short) ((short) min((var_10), (((/* implicit */long long int) var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((max((((/* implicit */long long int) arr_1 [i_0 - 1])), (var_10))), (((/* implicit */long long int) arr_1 [i_0 - 1]))));
                    var_19 = ((/* implicit */unsigned char) ((((int) (short)21741)) - (((int) var_15))));
                    var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (-1) : ((-(((/* implicit */int) (short)-21741)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)44)))))))));
                        var_22 = ((/* implicit */unsigned long long int) ((var_11) > (((unsigned int) var_15))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_10 [6ULL] [i_1] [i_1] [i_1])), (var_4)));
                        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) var_1))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [4ULL] [i_0 - 1])))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)6] [(unsigned char)6] [12U])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [(short)16] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)224);
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)27271)))));
                        arr_20 [i_0] [(_Bool)1] [i_2] [i_5] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)0)))) + ((-(((/* implicit */int) var_3))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned short) 13440505311478406285ULL)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 3) 
    {
        for (short i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            {
                arr_28 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2850427150U)) <= (378094476371147741ULL)));
                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((int) (_Bool)0)) % (-62747097))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_37 [i_9] [i_7 + 2] [i_8] = min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_12)))) >= (((/* implicit */int) max((arr_12 [i_6] [i_7] [(short)1] [i_10]), (((/* implicit */unsigned char) (signed char)-44)))))))), (((max((62747097), (((/* implicit */int) var_3)))) / (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) (signed char)56)))))));
                                var_27 &= ((/* implicit */int) (~((((!(((/* implicit */_Bool) arr_4 [i_7] [6LL] [10LL])))) ? (min((((/* implicit */unsigned long long int) (unsigned short)33733)), (0ULL))) : (((/* implicit */unsigned long long int) var_14))))));
                                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_15))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned int i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        {
                            arr_45 [i_6] [i_12] [i_12] [0LL] = ((/* implicit */unsigned char) (unsigned short)4148);
                            var_29 = ((((((/* implicit */_Bool) 8656893489772506205LL)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) (-(1188280579U)))) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_12 - 1] [i_7 + 1] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                            arr_46 [i_12] [i_7] [i_11] [i_11] = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) var_13)), (arr_34 [i_12] [i_12] [i_12]))), (((/* implicit */unsigned long long int) ((signed char) var_7))))), (((/* implicit */unsigned long long int) ((max((-9052886002631786789LL), (((/* implicit */long long int) 2805526151U)))) == (((/* implicit */long long int) (-(arr_3 [i_7] [12U] [i_12])))))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((int) arr_6 [i_6] [i_6] [(unsigned char)2]));
            }
        } 
    } 
}
