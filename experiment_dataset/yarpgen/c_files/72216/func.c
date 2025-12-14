/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72216
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
    var_19 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) var_17)), (max((((/* implicit */unsigned int) var_18)), (var_10)))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_13))))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)30052))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)8429)))))))) || (((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_1 [i_0])))), ((+(((/* implicit */int) (short)-8442))))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned long long int) arr_2 [i_1])))));
                }
            } 
        } 
        var_22 &= ((/* implicit */int) (short)8408);
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */short) 6378114509039776154ULL);
            /* LoopNest 3 */
            for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_21 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)1)), (12068629564669775459ULL)));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_17 [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4])))));
                            var_24 = ((/* implicit */short) (+((-(1476889019)))));
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
                        }
                    } 
                } 
            } 
            arr_22 [i_3 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (short)-8409)))));
            arr_23 [(signed char)8] [i_0] [i_0] = (~((-((+(arr_0 [i_3]))))));
            arr_24 [i_0] [i_0] [(signed char)10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [3LL]))))))), ((+(max((((/* implicit */unsigned int) arr_19 [10U] [10U] [10U] [i_0] [i_0])), (arr_14 [i_0] [i_0] [i_3 - 1])))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-6880984278233065453LL)))))))));
                    var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [(_Bool)1] [i_8] [i_8]))));
                }
            } 
        } 
        arr_32 [i_7] = ((/* implicit */long long int) ((int) (unsigned short)38634));
    }
    for (short i_10 = 3; i_10 < 9; i_10 += 3) 
    {
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_15 [i_10 - 3] [(_Bool)1] [(_Bool)1] [i_10])))))))));
        arr_37 [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)194)))))));
    }
    var_29 = ((/* implicit */short) (unsigned short)65535);
    var_30 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) 15367769237961000LL)) && (((/* implicit */_Bool) (short)-9513)))))))));
}
