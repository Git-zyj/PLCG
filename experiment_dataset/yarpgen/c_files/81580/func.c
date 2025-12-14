/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81580
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)28)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6))))));
                    arr_11 [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)17998))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (short)-24524);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(4400347290542132084ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-712))) : (7043106284813241732ULL))))));
                            arr_21 [i_6] [i_4] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) max((max((min((580956481), (arr_4 [i_3] [i_4] [i_3]))), (((var_3) | (((/* implicit */int) (short)-14165)))))), ((+(((/* implicit */int) (unsigned short)53867))))));
                            arr_22 [i_5] [i_5] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */int) max((max((((432345564227567616ULL) & (((/* implicit */unsigned long long int) arr_12 [i_3])))), (((/* implicit */unsigned long long int) arr_1 [i_4] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_20 [i_3]), (((/* implicit */long long int) (short)2612))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)4404)) && (((/* implicit */_Bool) (short)1536))))) : ((~(((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_27 [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((max(((-(((/* implicit */int) (short)-29503)))), (((/* implicit */int) var_4)))) - (((((/* implicit */int) arr_6 [i_4 + 1] [i_7])) + (((/* implicit */int) arr_6 [i_4 + 1] [i_7]))))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 + 2] [i_4 + 1])) > (((/* implicit */int) arr_1 [i_4 + 3] [i_4 - 1]))))), ((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)229)), (var_1)))))))))));
                            arr_28 [i_4] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)62887)), (-1530668608)));
                            var_14 ^= ((/* implicit */long long int) ((short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)7))))) | (1320881014743920916LL))));
                        }
                    } 
                } 
                arr_29 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)192)))) | (((/* implicit */int) ((((/* implicit */int) var_5)) == (arr_4 [i_3] [i_3] [i_3]))))))) ? (((/* implicit */int) min((arr_24 [i_3] [i_3]), (((/* implicit */unsigned char) ((17321898404005975608ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_4]))))))))) : (1073741823)));
            }
        } 
    } 
}
