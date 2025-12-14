/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97079
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_8 [i_2] [i_2] [(unsigned short)5] [(signed char)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) -732354545999292020LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (9631024318514290260ULL)))))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]))));
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-(((((/* implicit */int) arr_5 [i_2])) ^ (((/* implicit */int) arr_5 [i_0])))))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (unsigned char)216))));
                    var_14 = ((/* implicit */unsigned long long int) 796188381);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_19 [i_6] = ((/* implicit */int) arr_4 [(unsigned char)18] [i_6] [i_5]);
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (+(arr_14 [i_5 - 1]))))))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_9))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned short)0))));
                            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_13 [i_5])))));
                        }
                    } 
                } 
                arr_21 [i_3] = ((/* implicit */unsigned short) ((arr_5 [i_4]) ? (((int) (+(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */int) ((signed char) (~(arr_1 [i_3])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            {
                var_18 = ((/* implicit */int) (-(var_5)));
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_31 [i_7] [i_8]), (4294959104U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [i_10] [i_8] [i_8] [i_7] [i_7]))) : (min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14398)) | (((/* implicit */int) var_7))))))))))));
                            var_21 = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
}
